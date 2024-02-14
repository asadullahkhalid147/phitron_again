#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 0)
            cout << 0 << endl;
        else if (n == 1)
            cout << 0 << endl;
        else if (n == 2)
            cout << 0 << endl;
        else
        {
            vector<long long > v(n);
            vector<long long > p(n);
            for (int i = 0; i < n; i++)
                cin >> v[i];
            p[0] = v[0];
            for (int i = 1; i < n; i++)
            {
                p[i] = p[i - 1] + v[i];
            }
            long long  cnt = 0;
            for (int i = 0; i < n; i++)
            {
                long long  left = p[i] - v[i];
                long long  right = p[n - 1] - p[i];
                if (left == right)
                    cnt++;
                // cout<<left<<" "<<right<<" "<<cnt<<endl;
            }
            cout << cnt << endl;
        }
        /* code */
    }

    return 0;
}