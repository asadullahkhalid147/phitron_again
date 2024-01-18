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

Student* compare_student(Student* a, Student* b, Student* c)
    {
        if(a->num>b->num && a->num > c->num)
        {
            return a;
        }
        else if(b->num>a->num && b->num > c->num)
        {
            return b;
        }
        else if(c->num > a->num && c->num > b->num)
        {
            return c;
        }
        else if(a->num==b->num && a->num>c->num)
        {
            if(a->id < b->id)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
        else if(b->num==c->num && b->num>a->num)
        {
            if(b->id<c->id)
            {
                return b;
            }
            else
            {
                return c;
            }
        }
        else if(a->num==c->num && a->num>b->num)
        {
            if(a->id<c->id)
            {
                return a;
            }
            else
            {
                return b;
            }
        }
        else if(a->num==b->num && a->num==c->num)
        {
            if(a->id<b->id && a->id<c->id)
            {
                return a;
            }
            else if(b->id<c->id && b->id<a->id)
            {
                return b;
            }
            else if(c->id<a->id && c->id<b->id)
            {
                return c;
            }
        }

        return nullptr;
    }
int main()
{
    int t;cin>>t;
    while (t--)
    {
        
    int id;
    char name[100];
    char ch;
    int num;

    cin>>id;
    cin>>name;
    
    cin>>ch>>num;

    Student* a = new Student(id,name,ch,num);
    cin>>id;
    cin>>name;
    
    cin>>ch>>num;
    Student* b = new Student(id,name,ch,num);
    cin>>id;
    cin>>name;
    
    cin>>ch>>num;
    Student* c = new Student(id,name,ch,num);

    Student* younger = compare_student(a,b,c);

    cout<<younger->id<<" "<<younger->name<<" "<<younger->ch<<" "<<younger->num<<endl;
    
    }
    
    
}