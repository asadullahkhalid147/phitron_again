#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char ch;
    int num;
};
int main()
{
    Student a, b, c;

    cin>>a.id;
    cin>>a.name;
    cin>>a.ch>>a.num;


    cin>>b.id;
    cin>>b.name;
    cin>>b.ch>>b.num;


    cin>>c.id;
    cin>>c.name;
    cin>>c.ch>>c.num;


    cout<<a.id<<" "<<a.name<<" "<<a.ch<<" "<<a.num<<endl;
    cout<<b.id<<" "<<b.name<<" "<<b.ch<<" "<<b.num<<endl;
    cout<<c.id<<" "<<c.name<<" "<<c.ch<<" "<<c.num<<endl;


}