#include<iostream>
using namespace std;

int main()
{
    int arr1[100];
    int n;

    cout<<"Enter the size: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr1[i];
        arr1[i]=arr1[i]*2;
    }

    for(int i=0;i<n; i++){
        cout<<arr1[i]<<" ";
    }
    return 0;
}