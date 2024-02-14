#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
int main()
{
    Person* rakib= new Person("Rakib ahsan",25);
    Person* sakib= new Person("Sakib ahsan",23);
    // rakib=sakib;//not a proper way to copy object: 1st way

    // rakib->name=sakib->name;//2nd way
    // rakib->age=sakib->age;

    *rakib=*sakib;//3rd way. perfect way
    cout<<rakib->name<<" "<<rakib->age<<endl;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}