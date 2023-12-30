#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        int flag=0;
        scanf("%d",&n);
        int a[n+1];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int d;
        scanf("%d",&d);
        for(int i=0;i<n;i++)
        {
            if(a[i]==d)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
        /* code */
    }
    
}