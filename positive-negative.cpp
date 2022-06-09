#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a;
    cout<<"Enter any integer: ";
    cin>>a;

    if(a<0)
    {
        cout<<"Negative";
    }
    else if(a>0)
    {
        cout<<"Positive";
    }
    else if(a==0)
    {
        cout<<"Zero";
    }
    
    return 0;
}