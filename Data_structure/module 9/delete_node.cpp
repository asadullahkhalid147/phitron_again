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
void print_normal(Node*head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
        /* code */
    }
    cout<<endl;
    
}
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        /* code */
        tmp=tmp->prev;
    }
    cout<<endl;
    
}

void delete_at_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;//deleteNode 30
    tmp->next=tmp->next->next;//20 er next a 40 connect
    tmp->next->prev=tmp;//40 er prev a 20 connect
    delete deleteNode;
}

int size(Node* head)
{
    int cnt=0;
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
        /* code */
    }
    return cnt;
    
}
void delete_tail(Node* &head,Node* &tail)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node* &head,Node*&tail)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
int main()
{
    // Node* head=NULL;
    // Node* tail=NULL;
    Node* head= new Node(10);
 
    Node* a=new Node(20);
    Node* b = new Node(30);
    Node* c=new Node(40);
    Node* tail=c;

    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;

    int pos;cin>>pos;
    if(pos>=size(head))
    {
        cout<<"INVALID"<<endl;
    }
    else if(pos==0)
    {
        delete_head(head,tail);
    }
    else if(pos==size(head)-1)
    {
        delete_tail(head,tail);
    }
    else
    {
        delete_at_position(head,pos);
    }
    // delete_at_position(head,pos);
    // delete_tail(tail);
    // delete_head(head);
    print_normal(head);
    print_reverse(tail);
    
    
    
    return 0;
}