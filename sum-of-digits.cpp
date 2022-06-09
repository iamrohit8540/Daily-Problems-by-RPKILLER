#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    
    int n,m,count=0,r;
    cout<<"Enter any number: ";
    cin>>n;

    m=n;
    do
    {
        r=m%10;
        m=m/10;
        count=count+r;
        
        
    } while (m>0);

    cout<<"Sum is "<<count;
    
    

    return 0;
}