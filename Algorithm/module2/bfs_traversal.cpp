#include<bits/stdc++.h>
using namespace std;
vector<int>v[10005];
bool vis[10005];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    vis[src]=true;
    while (!q.empty())
    {
        int par=q.front();
        q.pop();
        cout<<par<<endl;

        for(auto child:v[par])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=true;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src;cin>>src;
    memset(vis,false,sizeof(vis));
    bfs(src);
    
    return 0;
}