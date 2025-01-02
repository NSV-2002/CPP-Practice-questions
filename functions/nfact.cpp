// calculate n factorial 
#include<iostream>
using namespace std;
int fact(int n )
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
      factorial *=i;
    }
    return factorial;
}
int main(){
cout <<"factorial of 5 is :- "<<fact(5)<<endl;
   return 0;
}