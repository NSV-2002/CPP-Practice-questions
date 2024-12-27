#include<iostream>
using namespace std;
int main()
{
    int num ,fact = 1;
    cout << "Enter the number :-"<<endl;
    cin >> num;
    for(int i=1;i<=num;i++)
    {
        fact = i * fact;
    }
    cout << fact << " is the factorial of :" << num << endl;
    return 0;
}