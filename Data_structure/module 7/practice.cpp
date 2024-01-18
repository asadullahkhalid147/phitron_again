#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=2;j++)
        {
            cin>>a[i][j];
        }
    }
    int f=0,s=0,t=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=2;j++)
        {
            if(j==0)f+=a[i][j];
            else if(j==1)s+=a[i][j];
            else if(j==2)t+=a[i][j];
        }
        
    }

    if(f==0 && s==0 && t==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    


    return 0;
}