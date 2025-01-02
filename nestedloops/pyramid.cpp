#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of rows :-"<<endl;             
    cin >> num;
    for(int i=0;i<num;i++)
    {
      for(int j=num;j>i;j--)
      {
        cout << " ";
      }
      for(int k=1;k<i;k++)
      {
        cout<< k;
      }
      for(int l=i;l>0;l--)
      {
        cout <<l;
      }
      cout <<endl;
    }
}
/*       1    
        121
       12321
      1234321*/