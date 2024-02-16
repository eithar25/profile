#include <iostream>
using namespace std;

class student{
public:
int age;
string name;
string school;

};


int main()
{
    student Eithar;
    Eithar.age = 16;
    Eithar.name="Eithar";
    Eithar.school="STEM";
    cout<<Eithar.name <<Eithar.age<<Eithar.school;
    return 0;
}
