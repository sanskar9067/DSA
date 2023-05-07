#include<iostream>
using namespace std;

void reverseArray(int arr1[], int size){
    int s=0;
    int e=size-1;
    while(s<e){
        swap(arr1[s],arr1[e]);
        s+=1;
        e-=1;
    }
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
}

int main()
{
    int size=5;
    int arr1[size]={5,4,8,6,9};
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<"=========="<<endl;
    reverseArray(arr1,size);

}