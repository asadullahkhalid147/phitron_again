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

int sum_leaf(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    else
    {
        int l=sum_leaf(root->left);
        int r=sum_leaf(root->right);
        return l+r+root->val;
    }
}
int main()
{
    Node* root = input_tree();
    int ans=sum_leaf(root);
    cout<<ans<<endl;
    return 0;
}

// input:
// 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1
// output:
// 3