#include <bits/stdc++.h>
using namespace std;
int x;
vector<int>vec;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {

        Node *p = q.front();
        q.pop();
        /* code */

        int l, r;
        cin >> l >> r;
        Node *my_left;
        Node *my_right;
        if (l == -1)
            my_left = NULL;
        else
            my_left = new Node(l);

        if (r == -1)
            my_right = NULL;
        else
            my_right = new Node(r);

        p->left = my_left;
        p->right = my_right;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root,int val)
{
    queue<pair<Node *,int>> q;
    // vector<pair<Node*,int>>
    q.push({root,val});
    while (!q.empty())
    {
        // 1. ber kore ana
        pair<Node*,int>parent=q.front();
        Node* node=parent.first;
        int level=parent.second;
        
        q.pop();
        /* code */

        // 2.jabotiyo ja kaj ache kora
        if(level==x)
        {
            vec.push_back(node->val);
        }

        // 3. tar children gulo ke rakha
        if (node->left)
            q.push({node->left,level+1});
        if (node->right)
            q.push({node->right,level+1});
    }
}
int main()
{
    Node *root = input_tree();
    cin>>x;
    level_order(root,0);
    if(vec.empty())cout<<"Invalid"<<endl;
    else
    {
        for(auto it:vec)cout<<it<<" ";
    }
    return 0;
}