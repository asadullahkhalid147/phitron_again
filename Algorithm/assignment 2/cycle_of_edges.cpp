#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
bool vis[N];
vector<int>adj[N];
int parentArray[N];
int ans=0;
void bfs(int s)
{
    queue<int>q;
    q.push(s);
    vis[s]=true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for(int child:adj[parent])
        {
            if(vis[child]==true && parentArray[parent]!=child)
            {
                ans++;
            }
            if(vis[child]==false)
            {
                vis[child]=true;
                parentArray[child]=parent;
                q.push(child);
            }
        }
        /* code */
    }
    

}
int main()
{
    int n,e;cin>>n>>e;
    while (e--)
    {
        int a,b;cin>>a>>b;
        /* code */
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis,false,sizeof(vis));
    memset(parentArray,-1,sizeof(parentArray));
    ans=false;
    
    bfs(1);
    cout<<ans/2<<endl;
    
    return 0;
}