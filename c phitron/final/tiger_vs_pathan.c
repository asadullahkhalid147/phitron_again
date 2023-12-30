#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        int tig=0,pat=0;
        while (n--)
        {
            char ch;
            scanf("%c",&ch);
            if(ch=='T')
            {
                tig++;
            }
            else
            {
                pat++;
            }

            /* code */
        }
        if(tig>pat)
        {
            printf("Tiger\n");
        }
        else if(tig<pat)
        {
            printf("Pathaan\n");
        }
        else
        {
            printf("Draw\n");
        }

        
        /* code */
    }
    
}