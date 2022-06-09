#include<bits/stdc++.h>
using namespace std;
 
int main()
{
int m,n,ans=0,r;

cin>>m;

n=m;
do
{
    r=n%10;
    n=n/10;
    ans=ans*10+r;
} while (n!=0);


if(m==ans)
{
    cout<<"Palindrome";
}
else
cout<<"Not Palindrome";

return 0;      
}