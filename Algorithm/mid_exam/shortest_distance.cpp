#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n+1][n+1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if(adj[i][j]==INT_MAX)
    //         {
    //             adj[i][j]=3000;
    //         }
    //     }
    // }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<"("<<i<<","<<j<<"):"<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"--------"<<endl;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        
        if(a!=b && c<adj[a][b])
        {
            adj[a][b]=c;
        }
        
    }
    // cout<<"----------"<<endl;
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<"("<<i<<","<<j<<"):"<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"--------"<<endl;
   
    for (int k = 1; k <= n; k++)
    {

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if(adj[i][k]+adj[k][j] < adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<"("<<i<<","<<j<<"):"<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    int t;cin>>t;
    int x,y;
    while (t--)
    {
        cin>>x>>y;
        if(adj[x][y]==INT_MAX)cout<<-1<<endl;
        else cout<<adj[x][y]<<endl;
       
    }
    
   

    return 0;
}

