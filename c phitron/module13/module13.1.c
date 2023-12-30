#include<stdio.h>
int main()
{
    int n,k=1;// k er man ekhane set korbo: jodi k er man 1 bari 1 hoy.
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        // k er man ekane set korbo jodi proti line shesh  a k er man update hoy
        for(int j=1;j<=k;j++)
        {
            // k er man ekhane set korbo jodi proti line a k er man update hoy. orthat proti ta star print hoyar por k er man change hobe
            printf("*");
        }
        // printf("kaj");
        printf("\n");
        k++; 
    }
}