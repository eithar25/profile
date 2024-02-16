#include <iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
 ofstream information("filename.txt");
 information<<"Name:Eithar+" "+Age:16+" "+nationality:Egyptian";
 information.close();
 string mytext;
 ifstream id("filename,txt");
 while(getline(id,mytext)){

 cout<<mytext;
 }
 return 0;
}
