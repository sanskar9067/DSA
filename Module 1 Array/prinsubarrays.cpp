#include<iostream>
using namespace std;

void subArrays(int arr1[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            for(int k=i; k<=j; k++)
            {
                cout<<arr1[k]<<" ";
            }
            cout<<endl;
        }
        
    }
}

int main()
{
    int arr1[]={4,5,6,8};
    int size = sizeof(arr1)/sizeof(int);
    subArrays(arr1,size);
}