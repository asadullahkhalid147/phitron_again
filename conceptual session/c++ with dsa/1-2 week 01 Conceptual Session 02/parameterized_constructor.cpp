#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    int age;
    char name[100];


    Student()
    {
        cout<<"Default constructor called"<<endl;
    }

    Student(int id, int age, char name[]){
        this->id=id;
        this->age=age;
        strcpy(this->name,name);
    }
};

int main()
{
    char name[]="asadullah khalid";
    Student* rahim = new Student(23,45,name);
    cout<<(*rahim).id<<" "<<rahim->age<<" "<<rahim->name<<endl;
   
}