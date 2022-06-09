#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int m,n,r,x,ans=0;
cout<<"Enter number in range from: ";
cin>>m;
cout<<"To: ";
cin>>n;

for (int i = m; i <= n; i++)
{
    x=i;
    while (x!=0)
    {
    r=x%10;
    x=x/10;
    ans=(r*r*r)+ans;
    }

if(ans==i)
{
    cout<<ans<<endl;
}

ans=0;

}

return 0;    
  
}