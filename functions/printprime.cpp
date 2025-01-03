#include<iostream>
using namespace std;
int isprime(int num)
{
    int key;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        key = 1;
    }
    if(key != 1)
    cout<< num<< " ";
}
int main()
{
  int num;
  cout<< "enter the value of n :"<<endl;
  cin >> num;
  for(int i=1;i<10;i++)
  {
    isprime(i);
  }
  return 0;
}