
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
int dfs(pair<int,int>src)
{
    int count=0;
    
    vis[src.first][src.second]=true;
    for(int i=0;i<4;i++)
    {
        int ci=src.first+d[i].first;
        int cj=src.second+d[i].second;
        pair<int,int>adj_node={ci,cj};
        if(is_inside(adj_node) && is_safe(adj_node) && vis[ci][cj]==0)
        {
            count+=1;
            count+=dfs({ci,cj});
            
        }
    }
    return count;
    
}
pair<int,int>find_unvisited()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(vis[i][j]==0 && mat[i][j]==0)
            {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main()
{
    cin>>n>>m;
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
            
        }
    }

    vector<int>v;
    while (true)
    {
        pair<int,int>unvisited_pos=find_unvisited();
        if(unvisited_pos==pair<int,int>{-1,-1})
        {
            break;
        }
        
        v.push_back(dfs(unvisited_pos));
        
        /* code */
    }
    sort(v.begin(),v.end());
    for(auto it:v)cout<<it+1<<" ";
    
    
    return 0;
}