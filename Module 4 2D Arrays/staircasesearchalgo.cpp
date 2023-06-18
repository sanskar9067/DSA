#include<iostream>
using namespace std;

pair<int,int> staircaseSearch(int arr[][4], int n, int m, int key)
{
    if(key<arr[0][0] || key>arr[n-1][m-1])
    {
        return {-1,-1};
    }

    int i=0;
    int j=m-1;

    while(i<=n-1 && j>=0)
    {
        if(arr[i][j]==key)
        {
            return {-1,-1};
        }
        else if(arr[i][j]>key)
        {
            j--;
        }
        else{
            i++;
        }
    }
    return {-1,-1};
}

int main()
{
    int arr[][4]={
        {1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}
    };

    pair <int,int> coords = staircaseSearch(arr,4,4,15);
    cout<<coords.first<<" "<<coords.second<<endl;
    return 0;

}