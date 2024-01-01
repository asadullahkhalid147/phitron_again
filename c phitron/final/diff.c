#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);

    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[1001];
        int b[1001]={0};
        int c[1001]={0};

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(int i=0;i<n;i++)
        {
            b[i]=a[i];
        }

        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    int tmp;
                    tmp=a[i];
                    a[i]=a[j];
                    a[j]=tmp;
                }
            }
        }

        for(int i=0;i<n;i++)
        {
            c[i]=abs(a[i]-b[i]);
        }

        for(int i=0;i<n;i++)
        {
            printf("%d ",c[i]);
        }
        printf("\n");

        /* code */
    }
    
}