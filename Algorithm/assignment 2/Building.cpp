#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
vector<int> vec[N];
bool vis[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
void dfs(int src)
{
    
    vis[src] = true;
    for (int child : vec[src])
    {
        if (vis[child] == false)
        {
            dfs(child);
        }
    }
}
class Edge
{
public:
    long long u, v, w;
    Edge(long long u, long long v, long long w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    dsu_initialize(n);
    vector<Edge> edge_list;
    while (e--)
    {
        long long u, v, w;
        cin >> u >> v >> w;
        edge_list.push_back(Edge(u, v, w));
        vec[u].push_back(v);
        vec[v].push_back(u);
        /* code */
    }
    memset(vis, false, sizeof(vis));
    int component = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == false)
        {
            dfs(i);
            component++;
        }
    }
    if (component > 1)
        cout << -1 << endl;
    else
    {
        sort(edge_list.begin(), edge_list.end(), cmp);
        long long totalCost = 0;
        for (Edge ed : edge_list)
        {
            // cout<<ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
            int leaderU = dsu_find(ed.u);
            int leaderV = dsu_find(ed.v);
            if (leaderU == leaderV)
            {
                continue;
            }
            else
            {
                dsu_union_by_size(ed.u, ed.v);
                totalCost += ed.w;
            }
        }
        cout << totalCost << endl;
    }

    return 0;
}

// input:
// 5 7
// 0 1 2
// 0 2 3
// 0 3 3
// 3 4 6
// 2 4 4
// 2 1 7
// 1 4 5

// output:
//  12
