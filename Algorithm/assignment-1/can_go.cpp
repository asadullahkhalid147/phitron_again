#include<bits/stdc++.h>
using namespace std;
const int N=1001;
const int M=1001;
int mat[N][M],vis[N][M],level[N][M];
int n,m;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
bool is_inside(pair<int,int>coord)
{
    int x=coord.first;
    int y=coord.second;

    if(x<0 || x>=n || y<0 || y>=m)
    {
        return false;
    }
    return true;

}

bool is_safe(pair<int,int>coord)
{
    int x=coord.first;
    int y=coord.second;

    if(mat[x][y]==-1)
    {
        return false;
    }
    return true;
}

void bfs(pair<int,int>src)
{
    queue<pair<int,int>>q;
    vis[src.first][src.second]=1;
    level[src.first][src.second]=0;
    q.push(src);
    while (!q.empty())
    {
        pair<int,int>head=q.front();
        q.pop();
        int x=head.first;
        int y=head.second;
        for(int i=0;i<4;i++)
        {
            int ci=x+d[i].first;
            int cj=y+d[i].second;

            pair<int,int>adj_node={ci,cj};
            if(is_inside(adj_node) && is_safe(adj_node) && vis[ci][cj]==0)
            {
                vis[ci][cj]=1;
                level[ci][cj]=level[x][y]+1;
                q.push(adj_node);
            }
        }


        /* code */
    }
    
}

int main()
{
    cin>>n>>m;
    pair<int,int>src,dst;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            level[i][j]=-1;
        }
    }
    memset(vis,0,sizeof(vis));
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        for(int j=0;j<m;j++)
        {
            if(s[j]=='#')
            {
                mat[i][j]=-1;
            }
            else if(s[j]=='A')
            {
                src={i,j};
            }
            else if(s[j]=='B')
            {
                dst={i,j};
            }
        }
    }

    bfs(src);
    if(level[dst.first][dst.second]==-1)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}