#include<bits/stdc++.h>
using namespace std;
const int maxN=1000;
const int maxW=1000;

int dp[maxN][maxW];
int knapsack(int n,int weight[],int value[],int w)
{
    if(n==0 || w==0)return 0;
    if(dp[n][w]!= -1)
    {
        return dp[n][w];
    }
    else
    {

    }
    if(weight[n-1]<=w)
    {
        // 2 ta option
        // niye dekhbo, na niye dekhbo
        int op1= knapsack(n-1,weight,value,w-weight[n-1])+value[n-1];

        int op2= knapsack(n-1, weight,value,w);

        return  dp[n][w]=max(op1,op2);

    }
    else
    {
        //1 ta option
        // na niye dekhte hobe
        int op2= knapsack(n-1, weight,value,w);
        return  dp[n][w]= op2;

    }
}
int main()
{
    int n;cin>>n;
    int weight[n],value[n];

    for(int i=0;i<n;i++)
    {
        cin>>weight[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>value[i];
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=w;j++)
        {
            dp[i][j]=-1;
        }
    }
    int  w;cin>>w;
    cout<<knapsack(n,weight,value,w)<<endl;
    return 0;
}


// input:
// 4
// 2 3 4 5
// 1 3 5 3
// 8

// output:
// 8
