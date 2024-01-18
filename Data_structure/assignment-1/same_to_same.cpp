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
void insert_tail(Node* &head,Node* &tail, int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

int compare(Node* head, Node* head1)
{
    int flag=1;
    while (head!=NULL && head1!=NULL)
    {
        if(head->val!=head1->val)
        {
            flag=0;
            break;
        }
        head=head->next;
        head1=head1->next;
        /* code */
    }
    return flag;
    
}

int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
        /* code */
    }
    return count;
    
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* head1=NULL;
    Node* tail1=NULL;
    int val;
    int val1;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        insert_tail(head,tail,val);
        /* code */
    }
    while (true)
    {
        cin>>val1;
        if(val1==-1)break;
        insert_tail(head1,tail1,val1);
        /* code */
    }
    int sz1=size(head);
    int sz2=size(head1);
    if(sz1==sz2)
    {
        int c=compare(head,head1);
        if(c==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}