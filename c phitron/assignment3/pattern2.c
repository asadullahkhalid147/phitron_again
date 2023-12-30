#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int s,k;
    s=n-1;
    k=1;

    for(int i=1;i<=n;i++)
    {
        for(int i=1;i<=s;i++)
        {
            printf(" ");
        }
        for(int j=k;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
        s--;
        k++;

    }
}