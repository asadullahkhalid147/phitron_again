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
bool search(Node* root ,int x)
{
    if(root==NULL) return false;
    if(root->val==x)return true;

    if(x<root->val)
    {
        return search(root->left,x);
        // bool l= search(root->left,x);
        // if(l==true)return;
        // else return false;
    }
    else
    {
        return search(root->right,x);
    }
}
int main()
{ 
    Node* root = input_tree();
    if(search(root,6))cout<<"YES, Found"<<endl;
    else
    {
        cout<<"No, Not Found"<<endl;
    }
    return 0;
}

// input:
// 10 5 15 2 6 12 16 -1 3 -1 -1 -1 -1 -1 -1 -1 -1
