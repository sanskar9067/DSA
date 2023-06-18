#include<iostream>
using namespace std;

void printArray(int arr[100][100], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int arr[100][100];
    int r,c;
    cin>>r>>c;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    printArray(arr,r,c);
}