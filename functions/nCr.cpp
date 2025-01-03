// calculate nCr binomial coefficient for n & r
#include<iostream>
using namespace std;
int fact(int num);
int coefi(int n,int r )
{
   int cr;
  cr = fact(n)/(fact(r)*fact(n-r));
  return cr;
}
int main()
{
  int n,r,cr;
  cout <<"Enter the value of n and r :"<<endl;
  cin>>n>>r;
  cout<<"the binomial coefficient of n & r is :" <<coefi(n,r)<<endl;
  return 0;
 
}
int fact(int num)
{
    int factorial=1;
    for(int i=1;i<=num;i++)
    {
        factorial*=i;
    }
    return factorial;
}