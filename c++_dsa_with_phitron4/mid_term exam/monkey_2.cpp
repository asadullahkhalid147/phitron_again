#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100000+5];

    while(cin.getline(s, sizeof(s)))
    {

        int n= strlen(s);

        sort(s, s+n);

        for(int i=0;i<n;i++)
        {
            if(s[i] !=' ')
                cout<<s[i];
        }

        cout<<endl;
    }
}