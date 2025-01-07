// find the intersection of two array
#include<iostream>
using namespace std;
int main()
{
   int arr1[]={1,2,3,4,5};
   int arr2[]={9,8,5,4,4};
   int size = 5;
   cout<<"intersection of two array are :"<<endl;
   for(int i=0;i<size;i++){
    for(int j=0;j<size;j++){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
        }
     }
   }
   return 0;
}