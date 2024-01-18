#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char ch;
    int num;


    Student(int id,char name[],char ch, int num)
    {
        this->id=id;
        strcpy(this->name,name);
        this->ch=ch;
        this->num=num;
    }
};
int main()
{
    int id;
    char name[100];
    char ch;
    int num;

    cin>>id;
    getchar();
    cin.getline(name,100);
    cin>>ch>>num;

    Student* a = new Student(id,name,ch,num);
    Student* b = new Student(id,name,ch,num);
    Student* c = new Student(id,name,ch,num);

    


    cout<<a->id<<" "<<a->name<<" "<<a->ch<<" "<<a->num<<endl;
    cout<<b->id<<" "<<b->name<<" "<<b->ch<<" "<<b->num<<endl;
    cout<<c->id<<" "<<c->name<<" "<<c->ch<<" "<<c->num<<endl;
    


}