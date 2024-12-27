#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout << "Enter an character :-"<<endl;
 cin >> ch ;
 if(ch >= 'a' && ch <= 'z')
 cout << "its a lower case letter"<<endl;
 else
 cout << "its a upper case letter"<<endl;
return 0;
}