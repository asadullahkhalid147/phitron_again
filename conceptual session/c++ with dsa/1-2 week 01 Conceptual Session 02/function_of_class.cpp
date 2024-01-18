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
Student* compare_student(Student* st1, Student *st2)
{
    // st1->age<st2->age?cout<<st1->name<<" is Younger"<<endl:cout<<st2->name<<" is younger"<<endl;

    // uporer line er shortcut version
    return(st1->age < st2->age ?st1:st2);
    
}

int fun()
{
    int x=10;
    return x;
}

// Student make_student()
// {
//     Student st;
//     st.age=50;
//     return st;
// }

Student* make_student()
{
    Student* st= new Student();
    st->age=50;
    return st;
}

int main()
{
    // Student newStudent = make_student();
//     newStudent.id = 12;
//    cout<<newStudent.id<<" "<<newStudent.age<<endl;

//    int a = fun();
//    cout<<a<<endl;

//    Student st;
//    cout<<sizeof(st)<<endl;

     Student* newStudent = make_student();
     cout<<newStudent->age<<endl;
    //  std::sleep_for(chrono::seconds(5));
     cout<<newStudent->age<<endl;
    delete newStudent;

}