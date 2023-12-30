#include<stdio.h>
#include<string.h>

int is_palindrome(char c[])
{
    int n = strlen(c);
    int flag=1;
    for(int i=0;i<n/2;i++)
    {
        if(c[i]!=c[n-i-1])
        {
            flag=0;
        }
    }
    return flag;
}
int main()
{
    char c[1000];
    scanf("%s",&c);
    int ans = is_palindrome(c);
    if(ans)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
}