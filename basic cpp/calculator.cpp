#include<iostream>
using namespace std;
int main()
{
    /*Write a C++ program using switch statement which accepts two integers and an operator as
      (+, -, *, /) and performs the corresponding operation and displaystheresult*/
      float a ,b;
      char c;
      cout << "Enter 1st number :- "<<endl;
      cin >>a;
      cout << "Enter the operant (/,*,-,+):- ";
      cin >> c;
      cout << "Enter 2nd number :- "<<endl;
      cin >>b;
      switch(c){
      case ('/'):
      {
        cout << a<<"/"<<b<<"="<< a/b<<endl;
      }break;
       case ('*'):
      {
        cout << a<<"*"<<b<<"="<< a*b<<endl;
      }break;
       case ('-'):
      {
        cout << a<<"-"<<b<<"="<< a-b<<endl;
      }break;
       case ('+'):
      {
        cout << a<<"+"<<b<<"="<< a+b<<endl;
      }break;
      default:
      cout << "Enter valid operant!!" <<endl;
      }
    return 0;
}