#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p;
    if(n<0)
    {
        p=n*-1;
    }

    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d ",i);
        }
    }
    else if(n<0)
    {
        for(int i=0;i<=p;i++)
        {
            printf("%d ",n);
            n++;
        }
    }
    else
    {
        printf("%d",0);
    }
}