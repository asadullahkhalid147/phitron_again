#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;

    //creating constructor
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void insert_tail(Node*&head, Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

bool reverse(Node*head, Node*tail)
{
    Node* i=head;
    Node* j=tail;
    while (i!=j && i->next!=j)
    {
        if(i->val!=j->val)
        {
            return false;
        }
        i=i->next;
        j=j->prev;
        /* code */
    }
    if(i->val!=j->val) return false;
    
    return true;
}
int main()
{
    Node* head= NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        else
        {
            insert_tail(head,tail,val);
        }
        /* code */
    }
    bool ans=reverse(head,tail);
    if(ans)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}