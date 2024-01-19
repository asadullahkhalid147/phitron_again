#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>myList={10,20,30};
    cout<<myList.max_size()<<endl;

    // myList.clear();
    myList.resize(2);// resize 1
    // myList.resize(5);//resize 2
    myList.resize(5,100);//resize 3
    for(int val: myList)
    {
        cout<<val<<" ";
    }
    return 0;
}