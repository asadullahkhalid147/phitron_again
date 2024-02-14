#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age2=34;
    void hello2()
    {
        cout<<"sakib namespaces"<<endl;
    }
}
using namespace Rakib;
int main()
{
    // cout<<Rakib::age<<endl;
    // cout<<Sakib::age2<<endl;

    cout<<age<<endl;
    hello();
    return 0;
}