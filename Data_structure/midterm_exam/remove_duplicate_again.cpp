#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>my_list;
    while (true)
    {
        int val;cin>>val;
        if(val==-1)break;
        else
        {
            my_list.push_back(val);
        }
        /* code */
    }
    my_list.sort();
   
    
    my_list.unique();
    for(auto it:my_list)cout<<it<<" ";
    return 0;
}