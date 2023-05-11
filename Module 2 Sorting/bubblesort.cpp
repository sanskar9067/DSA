#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for(int i=1; i<=n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int k=0; k<n; k++){
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int arr1[]={8,6,2,4,9,-5,7};
    int n = sizeof(arr1)/sizeof(int);
    bubbleSort(arr1,n);
}