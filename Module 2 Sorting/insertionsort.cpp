#include<iostream>
using namespace std;

void insertionsort(int a[], int n)
{
    for(int i=1;i<=n-1;i++)
    {
        int current = a[i];
        int prev = i-1;
        while(prev>=0 and a[prev]>current)
        {
            a[prev+1]=a[prev];
            prev = prev -1;
        }
        a[prev+1]=current;
    }


}

int main()
{
    int arr1[]={8,6,2,4,9,-5,7};
    int n = sizeof(arr1)/sizeof(int);
    insertionsort(arr1,n);
    for(int j=0;j<n;j++)
    {
        cout<<arr1[j]<<" ";
    }
}