#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    Student(int roll,int cls,double gpa)
    {
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
    }

};

// Student fun()
// {
//     Student rahim(342,5,4.99);
//     return rahim;

// }

Student *fun()
{
    Student rahim(342,5,4.99);
    Student *p = &rahim;
    return p;

}



int main()
{
    // function return dekhano hoyese
    // Student ans = fun();
    // cout<<ans.roll<<" "<<ans.cls<<" "<<ans.gpa<<endl;

    // pointer er return dekhano hoyese
    Student *ans = fun();
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
    return 0;
}