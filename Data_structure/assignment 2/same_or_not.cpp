#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> s;
    queue<int> q;
    int n, m;
    cin >> n >> m;
    if (n != m)
        cout << "NO" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.push(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;cin>>x;
            q.push(x);
        }
        int flag=1;
        while (!s.empty())
        {
            int y=s.top();
            int z=q.front();
            if(y!=z)
            {
                flag=0;
                break;
            }
            s.pop();
            q.pop();
            /* code */
        }

        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }

    return 0;
}