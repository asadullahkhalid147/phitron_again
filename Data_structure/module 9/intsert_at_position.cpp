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

void insert_at_position(Node* head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;//100 er next a 30 connect
    tmp->next=newNode;//20 er next a 100 connect

    newNode->next->prev=newNode;//30 er prev a 100 connect
    newNode->prev=tmp;//100 er prev a 20 connect
}
void insert_head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);

    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

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

    int pos,val;cin>>pos>>val;

    if(pos>size(head))
    {
        cout<<"Invalid"<<endl;
    }
    else if(pos==0)
    {
        insert_head(head,tail,val);
    }
    else if(pos==size(head))
    {
        insert_tail(head,tail,val);
    }
    else
    {
        insert_at_position(head,pos,val);
    }
    print_normal(head);
    print_reverse(tail);
    
    
    
    return 0;
}