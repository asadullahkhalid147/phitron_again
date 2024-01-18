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

void insert_at_head(Node *&head, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (tail == NULL)
    {
        Node *tmp = head;
        while (tmp->next != NULL)
            {
                tmp = tmp->next;
                /* code */
            }
            // tmp ekhon last node a;
            tmp->next = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }

}

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

void delete_from_position(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp==NULL)
        {
            return;
        }
    }
    if(tmp->next==NULL)
    {
        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void delete_head(Node *&head)
{
    if(head==NULL)
    {
        return;
    }
    Node *delete_node = head;
    head = head->next;
    delete delete_node;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_at_head(head, v);
            print_linked_list(head);
        }
        else if (x == 1)
        {
            // insert_tail(head, tail, v);
            insert_at_tail(head,v);
            print_linked_list(head);
        }
        else if (x == 2)
        {
            if (v == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head, v);
            }
            print_linked_list(head);
        }
        /* code */
    }

    return 0;
}