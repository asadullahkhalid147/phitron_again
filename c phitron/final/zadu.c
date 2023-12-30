#include<stdio.h>
int main()
{
    int a[100][100];
    int row,col;
    scanf("%d %d",&row,&col);

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=1;
    if(row!=col)
    {
        flag=0;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if( i==j || i+j==row-1)
            {
                if(a[i][j]!=1)
                {
                    flag=0;
                }
                continue;
            }
            
            if(a[i][j]!=0)
            {
                flag=0;
            }
        }
    }
    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}