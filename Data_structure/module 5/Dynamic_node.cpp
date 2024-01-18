#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

    //creating constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }

};
int main()
{
    //  Node head(10);
    // ekhane  a and head holo pointer. karon dynamic object create hoyese. karon "head","a" egula nijerai address   rakhhse.
    Node* head=new Node(10);
    Node* a = new Node(20);
    head->next=a;

    cout<<head->val<<endl;
    cout<<a->val<<endl;

    // a->val = head->next->val=(*(*head).next).// same
    cout<<head->next->val<<endl;
    cout<<(*(*head).next).val<<endl;
    return 0;
}