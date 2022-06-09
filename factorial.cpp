#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,f=1;
    cout<<"Enter number: ";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<"*";
        f=f*i;
        
    }
    
    cout<<endl<<f;
    

    
    


 
    return 0;
}