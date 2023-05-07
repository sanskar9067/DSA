#include<iostream>
using namespace std;

void printPairs(int arr1[], int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            cout<<arr1[i]<<","<<arr1[j]<<endl;
        }
    }
}

int main()
{
    int arr1[]={4,5,6,8};
    int size = sizeof(arr1)/sizeof(int);
    printPairs(arr1,size);
}