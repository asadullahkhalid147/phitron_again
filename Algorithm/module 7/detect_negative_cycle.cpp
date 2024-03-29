#include <bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int u, v, c;
    Edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int N = 1e5 + 5;
int dis[N];
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
        // edge_list.push_back(Edge(v, u, c));//***this will add when the grap is undirected***
        /* code */
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++) // O(V)
    {
        for (Edge ed : edge_list) // O(E)
        {
            int u, v, c;
            u = ed.u;
            v = ed.v;
            c = ed.c;
            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    bool cycle = false;
    for (Edge ed : edge_list) // O(E)
    {
        int u, v, c;
        u = ed.u;
        v = ed.v;
        c = ed.c;
        if (dis[u] < INT_MAX && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        cout << "Cycle found. no valid answer" << endl;
    else
    {
        for (int i = 0; i < n; i++)
            cout << "i->" << dis[i] << endl;
    }

    // for(Edge ed: edge_list)
    // {
    //     cout<<ed.u<<" "<<ed.v<<" "<<ed.c<<endl;
    // }

    return 0;
}



// 4 4
// 1 3 -3
// 0 3 5
// 2 1 1
// 0 2 -2

// 3 3
// 0 1 -1
// 1 2 2
// 2 0 -3