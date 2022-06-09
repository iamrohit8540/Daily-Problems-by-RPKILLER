#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int n,ans=0,r;

cin>>n;

do
{
    r=n%10;
    n=n/10;
    ans=ans*10+r;
} while (n!=0);

cout<<ans;
return 0;    
  
}