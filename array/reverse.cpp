#include<iostream>
using namespace std;
int reverse(int arr[],int size)
{
    int start=0,end=size-1,temp;
     while(start<end)
   {
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
   }
}
int main()
{
   int arr[] = {1,2,3,4,5,6,7,8};
   int size = sizeof(arr)/sizeof(int);
   reverse(arr,size);
   for(int i=0;i<size;i++)
   {
    cout<<arr[i]<<" ";
   }
   return 0;
}

