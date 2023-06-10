#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the string: ";
    int x=0;
    int y=0;
    char dir[100];
    cin.getline(dir,100);
    int length = sizeof(dir)/sizeof(char);
    for(int i=0; i<length; i++)
    {
        if(dir[i] =='n' || dir[i] =='N')
        {
            y++;
        }
        if(dir[i] =='s' || dir[i] =='S')
        {
            y--;
        }
        if(dir[i] =='e' || dir[i] =='E')
        {
            x++;
        }
        if(dir[i] =='w' || dir[i] =='W')
        {
            x--;
        }
    
    }

    cout<<"Final Destination: "<<x<<" "<<y;

}