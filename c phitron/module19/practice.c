#include <stdio.h>

int linear(int i,int n,int v,int a[])
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==v)return i;
    return linear(i+1,n,v,a);
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++)
    {
        int v;
        scanf("%d", &v);

        if(linear(0,n,v,a)==-1)
        {
            printf("No\n");
        }
        else
        {
            printf("Yes\n");
        }
    }
}