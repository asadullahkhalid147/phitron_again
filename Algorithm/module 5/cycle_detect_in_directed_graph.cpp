#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
bool pathVisit[N];
vector<int>adj[N];
bool ans;
void dfs(int parent)
{
    vis[parent]=true;
    pathVisit[parent]=true;
    for (int child:adj[parent])
    {
        if(pathVisit[child])
        {
            ans=true;
        }
        if(!vis[child])
        {
            dfs(child);
        }
        /* code */
    }
    pathVisit[parent]=false;
}
int main()
{
    int n,e;cin>>n>>e;
    while (e--)
    {
        int a,b;cin>>a>>b;
        /* code */
        adj[a].push_back(b);
        
    }
    memset(vis,false,sizeof(vis));
    memset(pathVisit,false,sizeof(pathVisit));
    ans=false;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if(ans)cout<<"Cycle detected";
    else cout<<"Cycle not detected";
    return 0;
}


// input:     
// 7 8
// 5 6
// 4 5
// 0 4
// 0 6
// 1 0
// 1 2
// 2 3
// 3 1 output: cycle not detected

// 7 7
// 5 6
// 4 5
// 0 4
// 0 6
// 1 0
// 1 2
// 2 3 output: cycle detected
