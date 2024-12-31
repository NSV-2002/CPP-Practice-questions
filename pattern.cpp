#include<iostream>
using namespace std;
int main()
{
    int num,count=1;
    cout << "Enter a number :- "<<endl;
    cin >> num;
    for(int i=1;i<num;i++)
    {
        for(int k=0;k<i;k++ )
        {
            for(int j=num;j>i;j-- )
            {
                cout << " ";
            }
            cout << count;
                count++;
        }
        cout<<endl;
    }
  return 0;
}