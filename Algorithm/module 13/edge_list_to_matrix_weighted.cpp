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
            mat[i][j]=-1;
            if(i==j)mat[i][j]=0;
        }
    }
    while (e--)
    {
        /* code */
        int a,b,c;cin>>a>>b>>c;
        mat[a][b]=c;
        mat[b][a]=c;
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
// 0 1 10
// 1 2 12
// 2 3 20
// 3 1 15

// output:
// 0 10 -1 -1 
// 10 0 12 15
// -1 12 0 20
// -1 15 20 0