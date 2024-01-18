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
void insert_at_tail(Node* &head, int v)
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
void print_linked_list(Node *head)
{
    cout << "Your Linked List: " << endl;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
        /* code */
    }
    cout<<endl<<endl;
}

int main()
{
    int val;
    Node* head = NULL;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head, val);
        /* code */
    }
    print_linked_list(head);
    
    return 0;
}