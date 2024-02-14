#include<bits/stdc++.h>
using namespace std;

class myQueue
{
public:
   list<int>l;

    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }

    int front()
    {
        return l.front();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myQueue q;
    

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        q.push(x);
    }
    if(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    {
        /* code */
    }
   
    
    return 0;
}

// input:
// 5
// 10
// 20
// 30
// 40
// 50