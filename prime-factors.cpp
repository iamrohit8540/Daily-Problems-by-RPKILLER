#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,c=0;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        if(n%i==0)
        {
            for (int j = 2; j < i; j++)
            {
                if (i % j == 0)
            {
                c=0;
                break;
            }
            
            else
            {
                c=1;
            } 
            }
        if (c==1)
        {
            cout<<i<<endl;
        }
        
        }

    }
        if (n==2)
        {
            cout<<"2";
        }
    
 
    return 0;
}