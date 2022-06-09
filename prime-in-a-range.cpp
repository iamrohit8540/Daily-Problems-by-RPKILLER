#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n,c=0;
    cout<<"Enter the range from: ";
    cin>>m;
    cout<<"To: ";
    cin>>n;

    for (int i = m; i < n; i++)
    {
        for (int j = 2;j < i; j++)
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
    
    return 0;
}