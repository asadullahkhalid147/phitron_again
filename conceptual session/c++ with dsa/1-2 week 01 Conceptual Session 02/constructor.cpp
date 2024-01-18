#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    int age;
    char name[100];

    Student(){
        cout<<"Default constructor called"<<endl;
    }
};

int main()
{
    Student* rahim = new Student;
    rahim->id=34;
    rahim->age=56;
    strcpy(rahim->name,"Rahim Ali");
    cout<<(*rahim).id<<" "<<rahim->age<<" "<<rahim->name<<endl;

    delete rahim;

    Student karim;
    karim.id=23;
    cout<<karim.id<<endl;
    return 0;
}