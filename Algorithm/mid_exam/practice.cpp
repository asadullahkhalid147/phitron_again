#include <bits/stdc++.h>
using namespace std;
const int N = 1001;
const int M = 1001;
int mat[N][M], vis[N][M];
int n, m;
vector<pair<int, int>> d = {{1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {-2, 1}, {2, -1}, {-2, -1}};
pair<int, int> src, dst;
bool is_inside(pair<int, int> coord)
{
    int x = coord.first;
    int y = coord.second;

    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return false;
    }
    return true;
}



int bfs(pair<int, int> src)
{
    queue<pair<int, int>> q;
    vis[src.first][src.second] = 1;
   
    q.push(src);
    int ans = 0;
    if(src.first==dst.first && src.second==dst.second)
    {
        return ans;
    }
    while (!q.empty())
    {
        int size = q.size();
        ans++;
        while (size != 0)
        {
            pair<int, int> head = q.front();
            q.pop();

            int x = head.first;
            int y = head.second;

            for (int i = 0; i < 8; i++)
            {
                int ci = x + d[i].first;
                int cj = y + d[i].second;

                pair<int, int> adj_node = {ci, cj};
                if(adj_node.first==dst.first && adj_node.second==dst.second)
                {
                    return ans;
                }
                if (is_inside(adj_node) &&vis[ci][cj] == 0)
                {
                    vis[ci][cj] = 1;
                   
                    q.push(adj_node);
                }
            }
            size--;
        }

        /* code */
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        memset(vis, 0, sizeof(vis));
      
        int x, y;
        cin >> x >> y;
        int c, d;
        cin >> c >> d;
        src = {x, y};
        dst = {c, d};
        

        int ans=bfs(src);

        if(ans==-1)cout<<-1<<endl;
        else cout<<ans<<endl;
        
        
    }
}