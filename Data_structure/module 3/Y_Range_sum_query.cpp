#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,q;
    cin>>n>>q;
    vector<long long>a(n);

    for(int i=0;i<n;i++)cin>>a[i];

    vector<long long>b(n);
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
    }

    while (q--)
    {
        int l,r;cin>>l>>r;
        l--;r--;
        if(l==0)cout<<b[r]<<endl;
        else
        {
            cout<<b[r]-b[l-1]<<endl;
        }
        /* code */
    }
    
    return 0;
}