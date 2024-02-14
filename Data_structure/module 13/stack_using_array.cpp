#include<bits/stdc++.h>
using namespace std;
class myStack
{
public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);//complexity:O(1)
    }

    void pop()
    {
        v.pop_back();//O(1)
    }
    int top()
    {
        return v.back();//O(1)
    }
    int size()
    {
        return v.size();//O(1)
    }
    bool empty()
    {
        if(v.size()==0)return true;
        else return false;
    }
};
int main()
{
    myStack st;
    // st.push(10);
    // st.push(20);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // st.pop();
    // if(st.empty()==false)
    // {
    //     cout<<st.top()<<endl;
    // }

    int n;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        st.push(x); 
    }
    while (!st.empty())//jotokhon khali na hobe cholte thako
    {
        cout<<st.top()<<endl;
        st.pop();
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