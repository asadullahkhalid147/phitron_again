#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;cin>>n>>e;
    vector<int> mat[n];
    while (e--)
    {
        int a,b;cin>>a>>b;
        /* code */
        mat[a].push_back(b);//directed graph a shudhu ai line ta hobe
        mat[b].push_back(a);//directed graph hole ai line likhbo na.
    }

    for(int i=0;i<mat[0].size();i++)
    {
        cout<<mat[0][i]<<" ";
    }
    
    return 0;
}