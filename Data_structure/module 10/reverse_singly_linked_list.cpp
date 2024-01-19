#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // creating constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void print_recursion(Node* n)
{
    if(n==NULL)return;
    cout<<n->val<<" ";
    print_recursion(n->next);
}

void print_reverse(Node* n)
{
    if(n==NULL)return;
    print_reverse(n->next);
    cout<<n->val<<" ";
}
void print(Node* head)
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
void reverse(Node* &head,Node* cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return; 
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;
}
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print(head);
    reverse(head,head);
    print(head);
    // print_recursion(head);
    // cout<<endl;
    // print_reverse(head);
    // print_linked_list(head);
    return 0;
}