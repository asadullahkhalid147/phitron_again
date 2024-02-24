#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_idx = v.size() - 1;
        while (cur_idx != 0)
        {
            int parent_idx = (cur_idx - 1) / 2;
            if (v[parent_idx] < v[cur_idx])
                swap(v[parent_idx], v[cur_idx]);
            else
                break;
            cur_idx = parent_idx;
            /* code */
        }
    }
    for (auto val : v)
        cout << val << " ";

    return 0;
}

// input:
// 11
// 50 40 45 30 35 42 32 25 20 10 55
// output:
// 55 50 45 30 40 42 32 25 20 10 35


// input:
// 5
// 10 30 40 50 60
// output:
// 5
// 60 50 30 10 40 