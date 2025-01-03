#include<iostream>
using namespace std;
int main()
{
  int num,rem,binary=0;
  int pow=1;
  cout <<"Enter a decimal number :-"<<endl;
  cin >>num;
  
  while(num!=0)
  {
    rem=num%2;
    num=num/2;
    binary +=rem*pow;
    pow*=10;
  }
   cout<<binary;
}