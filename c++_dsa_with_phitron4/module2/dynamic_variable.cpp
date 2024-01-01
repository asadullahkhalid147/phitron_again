#include<bits/stdc++.h>
using namespace std;

int * fun()
{
    int *a = new int;
    cout<<"fun: "<<a<<endl;
    *a = 100;
    return a;

}

int main()
{
    int *p = fun();
    cout<<"main: "<< p << endl;
    cout<<*p<<endl;

    // int *a = new int;
    // *a = 10;
    // cout<<"a er value"<<*a<<endl;
    // cout<<"address of a:"<<a<<endl;

    // float *f = new float;
    // *f = 1.53;
    // cout<<*f<<endl;
}