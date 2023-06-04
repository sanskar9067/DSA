#include<iostream>
using namespace std;

void selectionsort(int a[], int n)
{
    for(int pos=0;pos<=n-2;pos++)
    {
        int current = a[pos];
        int min = pos;

        for(int j=pos;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }
        swap(a[min],a[pos]);
    }
}

int main()
{
    int arr1[]={8,6,2,4,9,-5,7};
    int n = sizeof(arr1)/sizeof(int);
    selectionsort(arr1,n);
    for(int j=0;j<n;j++)
    {
        cout<<arr1[j]<<" ";
    }
}