#include<stdio.h>
int main()
{
    int a[26]={0};
    char c;
    while (scanf("%c",&c)!=EOF)
    {
        a[c-'a']++;

        /* code */
    }
    for(int i=0;i<26;i++)
    {
        char d=i+'a';
        if(a[i]!=0)
        {
            printf("%c - %d\n",d,a[i]);
        }
        
    }
    
    

}