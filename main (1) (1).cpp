

#include <bits/stdc++.h>
using namespace std;
class passport
{
public:
    string first_name;
    int password;
    string Firts_name, second_name, city_name,school_name;
    int year_of_birth;
    passport()
    {
        cin>>first_name;
        cin>>password;
        if (password==123456789)
            cin>>Firts_name>> second_name>> city_name>>school_name>>year_of_birth;
        else
            cout<<"password is not correct";
    }
    void information()
    {
        cout<<Firts_name<< second_name<<city_name<<school_name<<year_of_birth;
    }
};
int main()
{
    passport id;
    id.information();
    int age;
    int current_year=2022;
    int year_of_birth;
    cin>>year_of_birth;
    age= 2022 - year_of_birth;
    cout<<age;
    return 0;
}
