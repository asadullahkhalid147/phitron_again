#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
        long long int mul,f,s,t;
        scanf("%lld %lld %lld %lld",&mul,&f,&s,&t);
        long long int ans;
        long long int res=(f*s*t);

        if((mul%res)==0)
        {
            ans = (mul/res);
        }
        else
        {
            ans=-1;
        }

        printf("%lld\n",ans);
        /* code */
    }
    
}