#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<int> mat[n];
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        mat[a].push_back(b);
        mat[b].push_back(a);
        /* code */
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        sort(mat[x].begin(), mat[x].end(), greater<int>());
        if (mat[x].empty())
            cout << -1 << endl;
        else
        {
            for(int i=0;i<mat[x].size();i++)
            {
                cout<<mat[x][i]<<" ";
            }
            cout << endl;
        }
        /* code */
    }

    return 0;
}