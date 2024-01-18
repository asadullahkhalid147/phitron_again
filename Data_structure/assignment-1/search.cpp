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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int Traverse(Node *head, int x)
{
    Node *tmp = head;
    int i = 0, ans = -1;
    while (tmp != NULL)
    {
        if (tmp->val == x)
        {
            ans = i;
            break;
        }
        i++;
        tmp = tmp->next;
        /* code */
    }

    return ans;
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int val;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
            /* code */
        }
        int x;
        cin >> x;
        int res = Traverse(head, x);
        cout << res << endl;
    }

    return 0;
}