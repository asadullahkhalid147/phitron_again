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
    char name[];
    int id,age;
    cin>>id>>age;
    getchar();
    cin.getline(name,100);
    Student* rahim = new Student(id,age,name);
    cout<<(*rahim).id<<" "<<rahim->age<<" "<<rahim->name<<endl;
   
}