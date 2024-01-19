#include<bits/stdc++.h>
using namespace std;

int main()
{
    // list<int>my_list(10,5);//initialize 1: size 10 value 5 in each
    // list<int>list2={1,2,3,4,5};//initialize 2
    // cout<<my_list.front();// we can get first value
    // list<int>my_list(list2);///copying a list from another list

    // int a[5]={10,20,30,40,50};initialize 3
    // list<int>my_list(a,a+5);//initialize 3

    vector<int>v={100,200,300};//initialize 4
    list<int>my_list(v.begin(),v.end());//initialize 4
    // for(auto it=my_list.begin();it!=my_list.end();it++)
    // {
    //     cout<<*it<<endl;
    // }

    for(auto val:my_list)
    {
        cout<<val<<endl;
    }

    return 0;
}