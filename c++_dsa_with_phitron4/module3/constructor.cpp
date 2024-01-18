#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c,int g)
    // {
    //     roll=r;
    //     cls=c;
    //     gpa=g;
    // }

    Student(int roll,int cls,double gpa)
    {
        // (*this).roll = roll;
        // (*this).cls =cls;
        // (*this).gpa= gpa;

        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
        
        
    }
};

int main()
{
    // Student rahim;
    // rahim.roll = 29;
    // rahim.cls=9;
    // rahim.gpa=5.00;

    Student rahim(29,9,5.01);
    cout<<rahim.roll<<" "<<rahim.cls<<" "<<rahim.gpa<<endl;

    Student karim(45,10,4.33);
    cout<<karim.roll<<" "<<karim.cls<<" "<<karim.gpa<<endl;
   
    return 0;
}