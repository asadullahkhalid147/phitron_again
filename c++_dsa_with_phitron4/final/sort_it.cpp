#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    string name;
    int cls;
    string s;
    int id;
    int mat;
    int eng;
};

bool cmp(Student a, Student b)
{
    if(a.mat+a.eng == b.mat+b.eng)
    {
        return a.id < b.id;
    }
    else
    {
        return a.mat + a.eng > b.mat+b.eng;
    }
}
int main()
{
    int n;cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].cls>>a[i].s>>a[i].id>>a[i].mat>>a[i].eng;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].mat<<" "<<a[i].eng<<endl;
    }
    return 0;
}