#include<iostream>
using namespace std;

int main()
{
    char ch;
    
    ch = cin.get();
    int alpha = 0;
    int digit = 0;
    int space = 0;

    while(ch != '\n')
    {
        if(ch>='0' && ch<='9')
        {
            digit++;
        }

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            alpha++;
        }

        else if(ch==' ' || ch=='\t')
        {
            space++;
        }

        ch = cin.get();
    }
    cout<<alpha<<endl<<digit<<endl<<space;
}