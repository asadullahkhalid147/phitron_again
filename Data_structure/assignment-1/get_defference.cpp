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
long long int  Traverse(Node* head)
{
    Node* tmp=head;
    long long int mx=tmp->val;
    long long int mn=tmp->val;
    while (tmp!=NULL)
    {
        if(tmp->val>mx)
        {
            mx=tmp->val;
        }
        else if(tmp->val<mn)
        {
            mn=tmp->val;
        }
        tmp=tmp->next;
        /* code */
    }
    long long int ans=mx-mn;
    return ans;
    
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        insert_tail(head,tail,val);
        /* code */
    }
    long long int res=Traverse(head);
    cout<<res<<endl;
    
    return 0;
}