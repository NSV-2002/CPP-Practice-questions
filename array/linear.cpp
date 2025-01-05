#include<iostream>
using namespace std;
int linersearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
     if(arr[i]==key)
        return i;
    }
     return -1;
}
int main()
{
  int arr[]={7,2,6,4,8,6,1,9};
  int key = 6;
  int size = sizeof(arr)/sizeof(int);
   int result = linersearch(arr,size,key);
  if(result==-1)
    cout <<"value does not exist"<<endl;
  else
    cout <<"value exist at :"<<result<<endl;
  return 0;
}