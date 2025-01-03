#include<iostream>
using namespace std;
int main()
{
    /*a prefect number :a positive integer that is equal to the sum of its positive proper divisors,
     which are divisors that do not include the number itself:*/
    int num,sum=0;
    cout <<"Enter a number :-"<< endl;
    cin >> num;
    for(int i=1;i<num;i++)
    {
     if(num%i==0)
     {
       sum = sum+i; 
     }
    }
    if(sum == num)
    {
        cout << num <<" is a perfect number"<<endl;
    }
    else
    {
        cout << num << " is not a perfect number"<<endl;
    }
    return 0;
}