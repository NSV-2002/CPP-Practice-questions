// holo pyramid
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n :-"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            cout<<" ";
        }
        cout <<"*";
        if(i!=0){
        for(int j=1;j<=2*i-1;j++)
        {
            cout <<" ";
        }
        cout <<"*"; 
        }
        cout<<endl;
    }
    
        for(int i=0;i<n-1;i++)
        {
           for(int j=0;j<i+1;j++)
           {
            cout<<" ";
           }
           cout <<"*";
           if(i!=n-2){
           for(int j=0;j<2*(n-i)-5;j++)
           {
            cout <<" ";
           }
           cout<<"*";
           }
           cout<<endl;
        }
        
    
}