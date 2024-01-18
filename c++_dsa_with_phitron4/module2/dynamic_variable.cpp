#include<bits/stdc++.h>
using namespace std;

int * fun()
{
    int *a = new int;
    cout<<"fun: "<<a<<endl;
    *a = 100;
    return a;

}

// int** wow() //13.03 minitue
// {
//     int *b=new int;
//     cout<<"wow: "<<&b<<endl;
//     *b=111;
//     return &b;
// }

int main()
{
    int *p = fun();
    cout<<"main: "<< p << endl;
    cout<<*p<<endl;

    // int **q=wow();
    // cout<<"main: "<<q<<endl;
    // cout<<**q<<endl;

    // int *a = new int;
    // *a = 10;
    // cout<<"a er value"<<*a<<endl;
    // cout<<"address of a:"<<a<<endl;

    // float *f = new float;
    // *f = 1.53;
    // cout<<*f<<endl;
}