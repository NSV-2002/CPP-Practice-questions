// calculate sum of digit of a number
#include<iostream>
using namespace std;
int digit(int num);
int main()
{
    int num;
    cout<<"Enter the a number"<<endl;
    cin>>num;
    cout<<"sum of digit of "<<num<<" is :-"<<digit(num)<<endl;
    return 0;
}
int digit(int num)
{
    int remain=0;
    int sum=0;
    while(num!=0)
    {
        remain =num%10;
        sum+=remain;
        num=num/10;
    }
    return sum;
}