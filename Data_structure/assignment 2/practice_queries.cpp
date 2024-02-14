#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    stack<int> even;
    stack<int> odd;
    while (q--)
    {

        int n;
        cin >> n;
        if (n == 1)
        {
            int x;
            cin >> x;

            if (x % 2 == 0)
                even.push(x);
            else
                odd.push(x);
        }
        else if (n == 2)
        {
            stack<int> even1;
            int mn = INT_MAX;
            if (!even.empty())
            {
                while (!even.empty())
                {
                    if (mn > even.top())
                    {
                        mn = even.top();
                    }
                    even1.push(even.top());
                    even.pop();
                    /* code */
                }
                while (!even1.empty())
                {
                    if (even1.top() != mn)
                    {
                        even.push(even1.top());
                    }
                    even1.pop();
                    /* code */
                }
                cout << mn << endl;
            }
            else
                cout << "empty" << endl;
        }
        else
        {
            stack<int> odd1;
            int mn = INT_MAX;
            // while (!odd.empty())
            // {
            //     cout << odd.top() << endl;
            //     odd.pop();
            //     /* code */
            // }

            if (!odd.empty())
            {
                // cout << "h" << endl;
                while (!odd.empty())
                {
                    // cout << "H" << endl;
                    if (mn > odd.top())
                    {
                        mn = odd.top();
                    }
                    odd1.push(odd.top());
                    odd.pop();
                    /* code */
                }
                int flag=0;
                while (!odd1.empty())
                {
                    if (odd1.top() != mn)
                    {
                        even.push(odd1.top());
                    }
                    else
                    odd1.pop();
                    /* code */
                }
                cout << mn << endl;
            }
            else
                cout << "empty" << endl;
        }
        /* code */
    }

    return 0;
}