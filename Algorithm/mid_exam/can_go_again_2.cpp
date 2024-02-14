#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    long long int u, v, c;
    Edge(long long int u, long long int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const double N = 1e5 + 5;
vector<long double>dis(N);
int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edge_list.push_back(Edge(u, v, c));
        
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = 1e18;
    }
    int x;
    cin >> x;
    dis[x] = 0;
    for (int i = 1; i <= n - 1; i++) 
    {
        for (Edge ed : edge_list) 
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < 1e18 && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : edge_list) 
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < 1e18 && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Negative Cycle Detected" << endl;
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int y;
            cin >> y;
            if (dis[y] == 1e18)
                cout << "Not Possible"<<endl;
            else
                cout << dis[y] << endl;
           
        }

      
    }

  

    return 0;
}

