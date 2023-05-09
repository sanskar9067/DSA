#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int  lb=A[0];
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<Val || A[i]==Val)
        {
            lb=A[i];
        }
    }
    return lb;
}

int main()
{
    vector<int> arr1 = {-1,1,6,8,12};
    int val =7;
    cout<<lowerBound(arr1, val);
}