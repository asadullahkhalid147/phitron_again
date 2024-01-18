#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[10000];
    
    while (cin.getline(ch,sizeof(ch)))
    {
        int n=strlen(ch);
        sort(ch,ch+n);

        for(int i=0;i<n;i++)
        {
            if(ch[i]==' ')continue;
            else cout<<ch[i];
        }
        cout<<endl;

        /* code */
    }
    // s[i]='\0';
    // sort(s,s+strlen(s));
    
    
}