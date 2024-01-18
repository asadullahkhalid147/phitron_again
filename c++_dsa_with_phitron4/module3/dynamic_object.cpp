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

Student *fun()
{
    Student* rahim = new Student (342,5,4.99);
    
    return rahim;

}

int main()
{
    // Student rahim(342,10,4.56);
    Student* karim = new Student(312,11,4.22);
    cout<<karim->roll<<" "<<karim->cls<<" "<<karim->gpa<<endl;

    
    Student *ans = fun();
    cout<<ans->roll<<" "<<ans->cls<<" "<<ans->gpa<<endl;
    delete ans;
}