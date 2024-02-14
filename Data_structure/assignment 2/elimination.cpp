#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while (t--)
    {
        string s;cin>>s;
        queue<int>q;
        for(int i=0;i<s.size();i++)
        {
            q.push(s[i]-'0');
        }
        int flag=1,zero=0;
        while (!q.empty())
        {
            if(q.front()==1)
            {
                if(zero==0)
                {
                    flag=0;
                    break;
                }
                else
                {
                    zero--;
                }
                q.pop();
            }
            else
            {
                zero++;
                q.pop();
            }
            /* code */
        }
        if(flag && !zero)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
        // while (!q.empty())
        // {
        //     cout<<q.front()<<endl;;
        //     q.pop();
        //     /* code */
        // }
        
        /* code */
    }
    
    return 0;
}