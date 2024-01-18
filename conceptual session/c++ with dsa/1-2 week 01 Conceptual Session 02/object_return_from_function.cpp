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

int main()
{
    char name[100];
    int id,age;
    cin>>id>>age;
    getchar();
    cin.getline(name,100);

    Student* rahim = new Student(id,age,name);

    Student* karim=new Student();
    karim->age=32;
    karim->id=3;
    strcpy(karim->name,"hridoy khan");

    
    Student* younger = compare_student(rahim,karim);
    cout<<younger->name<<" is younger"<<endl;

    // cout<<(*rahim).id<<" "<<rahim->age<<" "<<rahim->name<<endl;
   
}