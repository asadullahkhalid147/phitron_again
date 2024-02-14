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
    // Student a[n];

    // int* a=new int[n];//dynamic integer array
    Student* a=new Student[n];

    for(int i=0;i<n;i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin>>a[i].roll>>a[i].marks;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].name<<" "<<a[i].roll<<" "<<a[i].marks<<endl;
    }

    
    return 0;
}

// input:
// 3
// Rifat khan
// 10 99
// Sifat khan
// 11 95
// Akib khan
// 12 90

// output:
// Rifat 10 99---->index: a[0]
// Sifat 11 95---->index: a[1]
// Akib 12 90---->index: a[2]