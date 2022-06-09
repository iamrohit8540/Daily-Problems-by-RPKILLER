#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int m,n,sum=0;
    cout<<"Enter range from: ";
    cin>>m;
    cout<<"To: ";
    cin>>n;

    for (int i = m; i <= n; i++)
    {
        sum += i;
        cout<<i<<endl;
    }

    cout<<"Sum is "<<sum;
    
 
    return 0;
}
