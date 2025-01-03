#include<iostream>
using namespace std;
int main()
{
    int binary,rem,decimal=0;
    int pow =1;
    cout <<"Enter the binary number :-"<<endl;
    cin>> binary;
    while(binary>0)
    {
        rem =binary%10;
        binary=binary/10;
        decimal+=rem*pow;
        pow*=2; 
    }
    cout<<decimal;
}