#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string>q;
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        if(n==0)
        {
            string s;cin>>s;
            q.push(s);
        }
        else
        {
            if(q.empty())cout<<"Invalid"<<endl;
            else
            {
                cout<<q.front()<<endl;
                q.pop();
            }
        }
        /* code */
    }
    
    return 0;
}