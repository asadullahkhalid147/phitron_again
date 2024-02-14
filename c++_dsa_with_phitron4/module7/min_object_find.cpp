#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};
int main()
{
    int n;cin>>n;
    Student a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    Student mn;
    mn.marks=INT_MAX;

    Student mx;
    mx.marks=INT_MIN;
    for(int i=0;i<n;i++)
    {
        // cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
        if(a[i].marks < mn.marks)
        {
            mn=a[i];
        }
        if(a[i].marks >mx.marks)
        {
            mx=a[i];
        }
    }
    cout<<endl;
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;

    
    return 0;
}

// input:
// 5
// Rifat 10 89
// Sifat 11 90
// Akib 12 95
// Sakib 13 85
// Rakib 9 91

// output:
// Sakib 13 85
// Akib 12 95