#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int y;
    cout<<"Enter year: ";
    cin>>y;

    if(y%4==0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Regular year";
    }

 
    return 0;
}