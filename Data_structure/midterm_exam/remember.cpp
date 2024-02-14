#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> my_list;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int nk = 0;

        if (x == 0)
        {
            my_list.push_front(v);
            cout << "L -> ";
            for (auto it : my_list)
                cout << it << " ";
            cout << endl;
            my_list.reverse();
            cout << "R -> ";
            for (auto it : my_list)
                cout << it << " ";
            cout << endl;
            my_list.reverse();
        }
        else if (x == 1)
        {
            my_list.push_back(v);
            cout << "L -> ";
            for (auto it : my_list)
                cout << it << " ";
            cout << endl;
            my_list.reverse();
            cout << "R -> ";
            for (auto it : my_list)
                cout << it << " ";
            cout << endl;
            my_list.reverse();
        }
        else if (x == 2)
        {
            int sz = 0;
            for (auto it = my_list.begin(); it != my_list.end(); it++)
            {
                sz++;
            }
            if (my_list.empty())
            {
                cout << "L -> ";
                for (auto it : my_list)
                    cout << it << " ";
                cout << endl;
                my_list.reverse();
                cout << "R -> ";
                for (auto it : my_list)
                    cout << it << " ";
                cout << endl;
                my_list.reverse();
            }
            else
            {
                if (v < sz)
                {
                    my_list.erase(next(my_list.begin(), v));
                    cout << "L -> ";
                    for (auto it : my_list)
                        cout << it << " ";
                    cout << endl;
                    my_list.reverse();
                    cout << "R -> ";
                    for (auto it : my_list)
                        cout << it << " ";
                    cout << endl;
                    my_list.reverse();
                }
                else
                {
                    cout << "L -> ";
                    for (auto it : my_list)
                        cout << it << " ";
                    cout << endl;
                    my_list.reverse();
                    cout << "R -> ";
                    for (auto it : my_list)
                        cout << it << " ";
                    cout << endl;
                    my_list.reverse();
                }
            }
        }
        else
        {
            cout << "L -> ";
            for (auto it : my_list)
                cout << it << " ";
            cout << endl;
            my_list.reverse();
            cout << "R -> ";
            for (auto it : my_list)
                cout << it << " ";
            cout << endl;
            my_list.reverse();
        }
        /* code */
    }

    return 0;
}