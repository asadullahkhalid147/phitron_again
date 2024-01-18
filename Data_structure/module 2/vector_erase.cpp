#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v={1,2,3,4,5};
    v.erase(v.begin()+3);/// erasing single value

    for (int x : v)
    {
        cout << x <<" ";
    }
    cout << endl;


    /// erasing multiple value
    vector<int>a={10,20,30,40,50};
    // a.erase(a.begin()+1,a.begin()+4);// erasing from index 1 to 3;
    a.erase(a.begin()+1,a.end()-1);// erasing from index 1 to 3;
    for (int x : a)
    {
        cout << x <<" ";
    }
    cout << endl;
    return 0;
}