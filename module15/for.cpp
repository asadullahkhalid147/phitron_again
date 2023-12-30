#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    vector<char>v;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            st.push(s[i]);
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            v.push_back(st.top());
            st.pop();
        }
        else
        {
            v.push_back(s[i]);
        }
    }

    for(auto it:v)
    {
        cout<<it;
    }
    return 0;
}