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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            // if(a[i].marks>a[j].marks)//ascending order
            // {
            //     swap(a[i],a[j]);
            // }
            // if(a[i].marks<a[j].marks)//descending order
            // {
            //     swap(a[i],a[j]);
            // }
            // if(a[i].roll<a[j].roll)//sorting based on roll
            // {
            //     swap(a[i],a[j]);
            // }

            if(a[i].marks<a[j].marks)
            {
                swap(a[i],a[j]);
            }
            if(a[i].marks==a[j].marks)
            {
                if(a[i].roll>a[j].roll)
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }
    cout<<endl;
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

// input 2:
// 5
// Rifat 10 89
// Sifat 11 90
// Akib 12 95
// Sakib 13 90
// Rakib 9 91

// output 2:
// Akib 12 95
// Rakib 9 91
// Sifat 11 90
// Sakib 13 90
// Rifat 10 89