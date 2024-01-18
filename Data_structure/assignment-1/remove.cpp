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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
        /* code */
    }
    // tmp ekhon last node a;

    tmp->next = newNode;
    
}
void delete_from_position(Node* head,int pos)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    
}
void remove(Node* head)
{
    Node* tmp = head;
    while (tmp!=NULL)
    {
        Node* now=tmp;
        // Node* curr= tmp->next;
        while (now->next!=NULL)
        {
            if(tmp->val==now->next->val)
            {
                Node* deleteNode=now->next;
                now->next=now->next->next;
                
                delete deleteNode;

            }
            else
            {
                now=now->next;
               
            }
            /* code */
        }
        tmp=tmp->next;
        
        /* code */
    }
    
}


void print_linked_list(Node *head)
{

    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
        /* code */
    }
    cout << endl;
}


int main()
{
    Node* head=NULL;
    
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,val);
        /* code */
    }
    
    remove(head);
   
    print_linked_list(head);
    
    return 0;
}