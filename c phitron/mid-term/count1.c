#include<stdio.h>
int main()
{
    int n;
    int two=0,three=0;
    scanf("%d",&n);
    while (n--)
    {
        int t;
        scanf("%d",&t);
        if(t%3==0 && t%2!=0)
        {
            three++;
        }
        else if(t%2==0)
        {
            two++;
        }
        /* code */
    }
    printf("%d %d",two,three);
}