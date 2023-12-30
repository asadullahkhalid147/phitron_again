#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    int id;
    int age;
    char name[100];

    Student(){
        cout<<"Default constructor"<<endl;
    }
    Student(int id, int age, char name[])
    {
        this->id = id;
        this->age = age;
        strcpy(this->name,name);
    }
};
int main()
{
    
    Student* rahim = new Student();
    rahim->id = 34;
    Student karim;
    karim.id=23;
    // cout<<rahim->id<<" "<<karim.id<<endl;
    cout<<rahim->name<<" "<<rahim->age<<" "<<rahim->id<<endl;
    
    return 0;
}