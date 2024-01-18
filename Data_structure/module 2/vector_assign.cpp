#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x={10,20,30};
    vector<int> v={1,2,3};

    v=x;//t.c:O(1) karon x and v er size same
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>a={101,201,301,401,501};
    vector<int>b={1,2,3};
    b=a;//t.c: O(n) karon a and b er size alada

    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}