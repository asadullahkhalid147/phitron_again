#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ans =(n-1)/2;
    int s=5+ans;
    int k=1;
    

    for(int i=1;i<=5+ans+1;i++)
    {
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }

        k+=2;
        s--;
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {

        for(int i=0;i<5;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=n;i++)
        {
            printf("*");
        }
        printf("\n");
    }
}