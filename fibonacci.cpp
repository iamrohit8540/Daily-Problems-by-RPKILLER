#include<bits/stdc++.h>
using namespace std;
 

 int fibonachi(int n){
     if(n == 0){
         return 0;
     }
     if(n == 1){
         return 1;
     }
     return fibonachi(n-1) + fibonachi(n-2);
 }
int main()
{
   int n;
   cin>>n;
   for(int i = 0; i<n; i++){
       cout<<fibonachi(i)<<" , ";
   }
   return 0;
}