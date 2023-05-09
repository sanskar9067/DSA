#include<iostream>
#include<vector>
using namespace std;

void sortedPairSum(vector<int> arr, int x)
{
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=i+1; j<arr.size(); j++)
        {
            if(arr[i]+arr[j]==x)
            {
                cout<<arr[i]<<" and "<<arr[j];
            }
        }
    }
}

int main()
{
    vector<int> arr1 = {10, 22, 28, 29, 30, 40};
    int x = 70;
    sortedPairSum(arr1,x);
}