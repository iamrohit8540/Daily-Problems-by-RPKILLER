#include<bits/stdc++.h>
using namespace std;
int ctr=0;
int dup(int arrO[],int arrD[])  
{
    int res[100];
    for (int p = 0; p <= 7; p++)
    {
        for (int k = 0; k <=7; k++)
        {
            if(arrO[p]==arrD[k] && p!=k)
            {
                cout<<arrO[p];
                res[p]=arrO[p];
            }
        }
    }
    
    
}
int main()
{
    int arrO[100];
    int arrD[100];
    int res[100];
    int n;

    cout<<"Duplications in ARRAY"<<endl;
    cout<<"====================="<<endl;
    cout<<"Enter the number of elemnts in array: ";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the "<<i<<"th Element: ";
        cin>>arrO[i];
    }
    

    for (int i = 0; i < n; i++)
    {
        arrD[i]=arrO[i];
        // cout<<arrO[i]<<endl;
    }
    cout<<"No. of Duplicate arrays:"<<endl;
    cout<<ctr<<endl;
    cout<<"Duplicate arrays:"<<endl;
    dup(arrO,arrD);
    return 0;
}
                // cout<<"Duplication found Sir"<<endl;
                // cout<<"arr["<<k<<"]="<<arrD[k]<<endl; //  " and arr["<<k<<"]="<<arrO[k]<<endl;