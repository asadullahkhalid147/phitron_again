#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string val;
    Node *prev;
    Node *next;

    Node(string val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
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

int visit(Node *head, string s)
{
    int i = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        if (tmp->val == s)
        {
            cout << tmp->val << endl;
            return i;
        }
        tmp = tmp->next;
        i++;
        /* code */
    }
    cout << "Not Available" << endl;
    return -1;
}
void previous(Node *head, int l)
{
    Node *tmp = head;
    if (l <= 0)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        for (int i = 1; i < l; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
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
void nnn(Node *head, int l, int sz)
{
    Node *tmp = head;
    int n = l + 1;
    if (sz == n)
    {
        cout << "Not Available" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
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
void insert_tail(Node *&head, Node *&tail, string val)
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
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (true)
    {
        string val;
        cin >> val;
        if (val == "end")
        {
            break;
        }
        else
        {
            insert_tail(head, tail, val);
        }
        /* code */
    }
    /* code */
    // print_normal(head);
    // print_reverse(tail);
    int q;
    cin >> q;
    int sz = size(head);
    while (q--)
    {
        string s;
        cin >> s;
        int l;
        int n;
        if (s == "visit")
        {
           
            string str;
            cin >> str;
            
            l=visit(head,str);
            if(l>=0)
            {
                n=l;

            }
            else
            {
                l=n;
            }
            // if(visit(head,str)!=-1)
            // {
            //     l=0;
            //     l=visit(head, str);
            // }
        }
        else if (s == "prev")
        {
            previous(head, l);
            if (l != 0)
            {
                l--;
                n--;
            }
        }
        else if (s == "next")
        {

            nnn(head, l, sz);
            if (l != sz-1)
            {
                l++;
                n++;
            }
        }
        /* code */
    }
}
