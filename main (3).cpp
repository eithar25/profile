#include <iostream>
using namespace std;
void intro(string name, string city , int age)
{
    cout << "My name is: " << name << "\n";
    cout << "I'm from: " << city << "\n";
    cout << "My age is: " << age << "\n";
}
int main()
{
    string name, city;
    int age;
    cin>>name>>city>>age;
    intro(name,city,age);
    return 0;
}
