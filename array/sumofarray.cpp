#include<iostream>
using namespace std;
int main()
{
   int arr[] ={1,2,3,4,5,6,7,8,9};
   int sum=0;
   int size =sizeof(arr)/sizeof(int);
   for(int i=0;i < size;i++)
   {
      sum += arr[i]; 
   }
    cout <<"sum is :"<<sum<<endl;
    return 0;
}