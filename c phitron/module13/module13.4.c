#include<stdio.h>
int main()
{
    int n;
    int s,k;

    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=(2*n)-1;i++)
    {
        for(int i=1;i<=s;i++)
        {
            printf(" ");
        }
        for(int i=1;i<=k;i++)
        {
            printf("*");
        }
        if(i<=n-1)
        {
            s--;
            k+=2;
        }
        else
        {
            s++;
            k-=2;
        }
        printf("\n");
    }
}