#include<iostream>
using namespace std;

int main()
{
    char sent;
    sent = cin.get();
    
    while(sent != '#')
    {
        cout<<sent;
        sent=cin.get();
    }
    

}
