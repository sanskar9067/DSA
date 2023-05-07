#include<iostream>
using namespace std;

void printLargestSumOfSubArrays(int arr1[], int size)
{
    int largestSum = 0;
    for(int i=0;i<size;i++)
    {
        for(int j=i;j<size;j++)
        {
            int subArraySum = 0;
            for(int k=i; k<=j; k++)
            {
                subArraySum = subArraySum + arr1[k];
            }
            largestSum = max(largestSum,subArraySum);
        }
        
    }
    cout<<"Largest Sum is: "<<largestSum;
}

int main()
{
    int arr1[]={-2,3,4,-1,5,-12,6,1,3};
    int size = sizeof(arr1)/sizeof(int);
    printLargestSumOfSubArrays(arr1,size);
}