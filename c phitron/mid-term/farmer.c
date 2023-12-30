#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int m1,m2,d;
        scanf("%d %d %d",&m1,&m2,&d);

        int r=(m1*d)/(m1+m2);
        /* code */
        int l=d-r;
        // printf("%d\n",r);
        printf("%d\n",l);
    }
    
    
}