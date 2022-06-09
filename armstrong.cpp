#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int m,n,ans=0,r;
cout<<"Enter number: ";
cin>>n;

m=n;

do
{
    r=n%10;
    n=n/10;
    ans=(r*r*r)+ans;
} while (n!=0);



if(ans==m)
{
    cout<<"Armstrong";
}
else
cout<<"Not Armstrong";

return 0;    
  
}