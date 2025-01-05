#include<iostream>
#include<climits>
using namespace std;
void swap(int arr[],int smaller,int largest)
{
int temp;
  temp = arr[smaller];
  arr[smaller] = arr[largest];
  arr[largest] =temp;
}
void printarr(int arr[],int size)
{
      for(int i=0;i<size;i++)
     {
       cout << arr[i]<<" ";
     }
     cout<<endl;
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int size = sizeof(arr)/sizeof(int);
  int smaller = INT_MAX;
  int largest = INT_MIN;
  printarr(arr,size);
  for(int i=0;i<size;i++)
  {
    if(smaller > arr[i])
     smaller = i; 
    if(largest < arr[i])
     largest = i;
  }
  swap(arr,smaller,largest);
  printarr(arr,size);
  return 0;
}