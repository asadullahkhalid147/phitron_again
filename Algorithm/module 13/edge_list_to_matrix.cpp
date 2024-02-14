#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,e;cin>>n>>e;
    int mat[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=0;
            if(i==j)mat[i][j]=1;
        }
    }
    while (e--)
    {
        /* code */
        int a,b;cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

// input:
// 4 4
// 0 1
// 1 2
// 2 3
// 3 1

// output:
// 1 1 0 0 
// 1 1 1 1
// 0 1 1 1
// 0 1 1 1