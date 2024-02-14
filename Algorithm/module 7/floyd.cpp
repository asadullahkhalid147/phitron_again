#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
        // adj[b][a]=c// jodi undirected hoy

        /* code */
    }
    // cout<<"BEFORE"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (adj[i][j] == INT_MAX)
    //             cout << "INF ";
    //         else
    //             cout << adj[i][j] << " ";
    //     }
    //     cout<<endl;
    // }
    for (int k = 0; k < n; k++)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout<<i<<" "<<k<<" "<<j<<endl;
                if(adj[i][k]+adj[k][j] < adj[i][j])
                {
                    adj[i][j]=adj[i][k]+adj[k][j];
                }
            }
        }
    }
    // cout<<"AFTER"<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         if (adj[i][j] == INT_MAX)
    //             cout << "INF ";
    //         else
    //             cout << adj[i][j] << " ";
    //     }
    //     cout<<endl;
    // }

    for(int i=0;i<n;i++)
    {
        if(adj[i][i]<0)
        {
            cout<<"Cycle Detected"<<endl;
            break;
        }
    }

    return 0;
}

// 4 6
// 3 2 8
// 2 1 5
// 1 0 2
// 3 0 20
// 0 1 3
// 1 2 2


// 3 3
// 0 1 -1
// 1 2 3
// 2 0 -1

//negative cycle
// 3 3
// 0 1 -5
// 1 2 3
// 2 0 -1
