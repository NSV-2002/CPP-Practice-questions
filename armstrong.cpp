#include<iostream>
using namespace std;
int main()
{
    //a number that is equal to the sum of cubes of its digits.
  int num,remainder,sum=0,ans;
  cout <<"Enter a number :-"<<endl;
  cin >>num;
  ans = num;
   for(int i=1;i<=num;i++)
  {
    remainder = num%10;
    sum += (remainder*remainder*remainder); 
    num = num/10;
  }
   sum +=(num*num*num);
   if(sum == ans)
    {
        cout << ans <<" is a armstrong number"<<endl;
    }
    else
    {
        cout << ans << " is not a armstrong number"<<endl;
    }
    return 0;
}