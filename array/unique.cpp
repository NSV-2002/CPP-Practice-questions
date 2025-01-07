#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,1,2,3};
    int unique=-1;
    int isunique;
    int size =sizeof(arr)/sizeof(int);

    for(int i=0;i<size;i++)
    {
        bool isunique =true;
         for(int j=0;j<size;j++)
         { 
             if(i!=j && arr[i]==arr[j])  {
               isunique=false;
               break;
             }
        }
        if(isunique)
            {
                unique = arr[i];
                break;
            }
    }
     if (unique != -1)
        cout << "First unique element: " << unique << endl;
    else
        cout << "No unique element found." << endl;
return 0;
}