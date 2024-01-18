#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

     for (int x : v)
    {
        cout << x <<" ";
    }
    cout << endl;
    // inserting in index 2:  v.insert(v.begin()+k,num)
    v.insert(v.begin()+2,10);
    for (int x : v)
    {
        cout << x <<" ";
    }
    cout << endl;


    /// inserting a whole vector ; in a vector
    vector<int>a={10,20,30,40,50};
    vector<int>b={101,201,301,401,501};
    for (int x : a)
    {
        cout << x <<" ";
    }
    cout << endl;

    a.insert(a.begin()+2,b.begin(),b.end());
    for (int x : v)
    {
        cout << x <<" ";
    }
    cout << endl;

    return 0;
}