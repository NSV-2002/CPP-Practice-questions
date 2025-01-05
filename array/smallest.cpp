#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[6]={5,15,24,1,-15,-24};
    int size = 6;

    int smallers = INT_MAX;
    int largest = INT_MIN;
     
    for(int i=0;i<6;i++)
    {
        if(arr[i]<smallers)
            smallers = arr[i];
        if(arr[i]>largest)
        largest = arr[i];
    }
    cout <<"largest ="<<largest<<endl;
    cout <<"smaller ="<<smallers<<endl;
return 0;
}
    