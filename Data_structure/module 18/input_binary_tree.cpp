#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node *input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while (!q.empty())
    {

        Node* p=q.front();
        q.pop();
        /* code */

        int l,r;cin>>l>>r;
        Node* my_left;
        Node* my_right;
        if(l==-1)my_left=NULL;
        else my_left=new Node(l);

        if(r==-1)my_right=NULL;
        else my_right=new Node(r);

        p->left=my_left;
        p->right=my_right;



        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
    }
    return root;
}
void level_order(Node* root)
{
    if(root==NULL)
    {
        cout<<"Tree nai"<<endl;
        return;
    }
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        //1. ber kore ana
        Node* f=q.front();
        q.pop();
        /* code */

        //2.jabotiyo ja kaj ache kora
        cout<<f->val<<" ";

        //3. tar children gulo ke rakha
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    
}
int main()
{
    Node* root = input_tree();
    level_order(root);
    return 0;
}

// input:
// 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
// output:
// 10 20 60 30 50 70 40 80 