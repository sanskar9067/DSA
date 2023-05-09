#include<iostream>
#include<vector>
using namespace std;

void largestSum(vector<int> arr, int n)
{
    int maxSum ;
    int subArraySum;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            subArraySum = 0;
            for(int k=i;k<=j;k++)
            {
                subArraySum = subArraySum + arr[k];
                //cout<<arr[k]<<" ";
            }
            maxSum = max(maxSum, subArraySum);
        }
    }
    cout<<maxSum;
}

int main()
{
    vector<int> arr = {4,6,-2,5,-4,9,3};
    int n = arr.size();
    //cout<<arr[5];
    largestSum(arr, n);
}