#include<stdio.h>

void odd_even()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int odd=0,even=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d %d\n",even,odd);
}
int main()
{
    odd_even();
}