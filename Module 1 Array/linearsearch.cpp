#include<iostream>
using namespace std;

int linearsearch(int arr1[], int n, int key)
{
    for(int i=0; i<n; i++)
    {
        if(key == arr1[i])
        {
            return i;
        }
        else{
            return -1;
        }
    }
}

int main()
{
    int n;
    int key;
    cin>>n;
    int arr1[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    for(int i=0; i<n; i++){
        cout<<arr1[i]<<" ";
    }

    cin>>key;

    int res = linearsearch(arr1, n, key);

    if(res == -1)
    {
        cout<<"Element not found";

    }
    else{
        cout<<"Element found at index "<<res;
    }
}