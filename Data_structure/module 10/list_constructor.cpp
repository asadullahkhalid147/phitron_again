#include<bits/stdc++.h>
using namespace std;

int main()
{
    // list<int>my_list(10,5);
    // list<int>list2={1,2,3,4,5};
    // cout<<my_list.front();
    // list<int>my_list(list2);///copying a list from another list

    int a[5]={10,20,30,40,50};
    list<int>my_list(a,a+5);//initialize 
    for(auto it=my_list.begin();it!=my_list.end();it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}