#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
};
bool cmp(Student a, Student b)
{
    // if(a.marks <= b.marks) return true;//ascending order: if condition true than do nothing, if false swap a.marks and b.marks
    // else return false;

    // return a.marks >= b.marks;// descending order. shortcut

    // if(a.marks>b.marks)
    // {
    //     return true;
    // }
    // else if(a.marks < b.marks)
    // {
    //     return false;
    // }
    // else
    // { 
    //     // if(a.roll < b.roll)
    //     // {
    //     //     return true;
    //     // }
    //     // else
    //     // {
    //     //     return false;
    //     // }

    //     return a.roll < b.roll; //shortcut
    // }

    if(a.marks == b.marks)
    {
        return a.roll < b.roll;
    }
    else
    {
        return a.marks > b.marks;
    }
}
int main()
{
    int n;cin>>n;
    Student a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    
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
// Rifat 10 89
// Sifat 11 90
// Rakib 9 91
// Akib 12 95

// input 1:
// 5
// Rifat 10 90
// Sifat 11 90
// Akib 12 95
// Sakib 13 85
// Rakib 9 90

// output 1:
// Akib 12 95
// Rakib 9 90
// Rifat 10 90
// Sifat 11 90
// Sakib 13 85