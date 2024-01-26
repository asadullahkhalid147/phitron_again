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