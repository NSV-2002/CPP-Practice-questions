#include<iostream>
using namespace std;
bool pow(int num);
int main()
{
    int num;
    cout << "Enter a number :-"<<endl;
    cin >> num;
    
    if(pow(num))
    {
        cout <<"number is power of 2"<<endl;
    }
    else
    {
        cout <<"number is not power of 2"<<endl;
    }
    return 0;
}
bool pow(int num)
{
  if(num<=0) return false;
 return (num & (num-1))==0;
}