#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    char name[100];
    char ch;
    int marks;
    
};
int main()
{

    Student a;
    cin>>a.id>>cin.getline(a.name,100)>>a.ch>>a.marks;
    // getchar();
    // cin.getline(a.name,100);
    // cin>>a.ch>>a.marks;

    cout<<a.id<<" "<<a.name<<" "<<a.ch<<" "<<a.marks<<" ";
    
    return 0;
}