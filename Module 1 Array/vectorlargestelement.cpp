#include<iostream>
#include<vector>
using namespace std;

void largestElement(vector<int> arr1, int n){
    int max=arr1[0];
    for(int i=0;i<n;i++){
        if(arr1[i]>=max){
            max=arr1[i];
        }
    }
    cout<<max;
}

int main(){
    vector<int> arr1 = {4,-9,78,9,-8,333};
    int n = arr1.size();
    largestElement(arr1,n);
}