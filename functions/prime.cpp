#include<iostream>
using namespace std;
int prime(int num);
int main()
{
    int num;
    cout<<"enter a number :-"<<endl;
    cin >> num;
    prime(num);
    return 0;
}
int prime(int num)
{
    int key;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        key = 1;
    }
    if(key != 1)
    cout<< "the number is prime";
    else
    cout<< "the number is not prime";
}