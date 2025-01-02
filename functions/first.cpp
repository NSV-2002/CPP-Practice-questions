#include<iostream>
using namespace std;
int add(int a, int b){
    cout << a+b<<endl;
    return a+b;
}
int min(int a, int b)
{
    if(a<b)
    cout<< a<<" is minimum"<<endl;
    else
    cout<<b<<"is minimum"<<endl;
}
int main()
{
  cout <<"hello"<<endl;
  add(5,6);
  min(4,5);
  return 0;
}