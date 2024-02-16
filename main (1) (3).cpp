

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
        cout<<"enter your first name";
        cin>>first_name;
        cout<<"enter your password";
        cin>>password;
        if (password==123456789)
           cout<<"enter your first name";
           cin>>Firts_name;
           cout<<"enter your second name";
           cin>>second_name;
           cout<<"enter your city name";
           cin>>school_name;
           cout<<"enter your school name";
           cin>>year_of_birth;
           cout<<"enter your year of birth";
            cin>>Firts_name>> second_name>> city_name>>school_name>>year_of_birth;
           
        else
            cout<<"password is not correct";
    
    void information()
    {
        cout<<Firts_name<< second_name<<city_name<<school_name<<year_of_birth;
    }};
int main()
{
    passport id;
    id.information();
    int age;
    int current_year=2022;
    int year_of_birth;
    cout<<"enter your year of birth";
    cin>>year_of_birth;
    age= 2022 - year_of_birth;
    cout<<age;
    return 0;
}
