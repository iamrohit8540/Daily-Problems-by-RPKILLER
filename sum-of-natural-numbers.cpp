#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,sum=0;
    cout<<"Enter number: ";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
        cout<<i<<endl;
    }

    cout<<"Sum is "<<sum;
    
 
    return 0;
}
