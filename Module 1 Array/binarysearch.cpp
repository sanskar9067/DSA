#include<iostream>
using namespace std;

int binarysearch(int arr1[], int n, int key)
{
    int s=0;
    int e=n-1;

    int res = 0;

    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr1[mid] == key)
        {
            return mid+1;
            break;
            res = 1;
        }
        else if(arr1[mid]>key)
        {
            e=mid-1;
        }
        else if(arr1[mid]<key){
            s=mid+1;
        }
    }
    if(res == 0){
        return  0;
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr1[n];

    cout<<"Enter the elemnts of the array;"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }

    int key;
    cout<<"Enter the element to search";
    cin>>key;
    
    binarysearch(arr1, n , key);
    int x = binarysearch(arr1, n, key);
    if(x==0){
        cout<<"Element not found";
    }
    else{
        cout<<"Element found at "<<x<<" position";
    }
}