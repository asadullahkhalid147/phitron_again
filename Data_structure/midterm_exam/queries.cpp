#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    // creating constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_normal(Node *head)
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

void insert_head(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_reverse(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        /* code */
        tmp = tmp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    int cnt = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
        /* code */
    }
    return cnt;
}
int insert_at_position(Node *&head, Node *&tail, int pos, int val, int sz)
{
    if (pos == 0)
    {
        insert_head(head, tail, val);
        return 1;
    }
    if (pos == sz)
    {
        insert_tail(head, tail, val);
        return 1;
    }
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {
            cout << "Invalid" << endl;
            return -1;
        }
    }
    newNode->next = tmp->next; // 100 er next a 30 connect
    tmp->next = newNode;       // 20 er next a 100 connect

    newNode->next->prev = newNode; // 30 er prev a 100 connect
    newNode->prev = tmp;           // 100 er prev a 20 connect
    return 1;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int q;
    cin >> q;
    int nk = 0;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        int sz = size(head);
        if (x != 0 && nk == 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            int flag = insert_at_position(head, tail, x, v, sz);
            nk = 1;

            if (flag == 1)
            {
                cout << "L -> ";
                print_normal(head);
                cout << "R -> ";
                print_reverse(tail);
            }
        }
        /* code */
    }
    return 0;
}