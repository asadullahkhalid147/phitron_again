#include<bits/stdc++.h>
using namespace std;
vector<int>v[10005];
bool vis[10005];

void bfs(int src, int des)
{
    queue<pair<int,int>>q;
    q.push({src,0});

    vis[src]=true;
    bool paisi=false;
    while (!q.empty())
    {
        pair<int,int>p=q.front();
        q.pop();
        // cout<<par<<endl;
        
        int par=p.first;
        int level=p.second;
        if(par==des)
        {
            cout<<level<<endl;
            paisi=true;
        }

        for(auto child:v[par])
        {
            if(!vis[child])
            {
                q.push({child,level+1});
                vis[child]=true;
               
            }
            
        }
        /* code */
    }
    if(paisi==false)
    {
        cout<<-1<<endl;
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
    bfs(src,6);
    
    
    return 0;
}