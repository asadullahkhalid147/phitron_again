#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int t;
    cin >> t;
    while (t--)
    {
        int l = 0, r = 0, cnt = 0;
        int i, j;
        cin >> i >> j;
        for (int k = i - 1; k < j ; k++)
        {
            // cout<<s[k]<<endl;
            if (s[k] == '(')
                l = k;
            else if (s[k] == ')')
                r = k;
            else
            {
                cnt++;
            }
        }
        if (l > r && l && r)
            cout << "NO" << endl;
        else
        {
        
            if (l)
                cnt--;
            if (r)
                cnt--;
            if (cnt % 2 == 0)
            {
                // cout<<cnt<<endl;
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}