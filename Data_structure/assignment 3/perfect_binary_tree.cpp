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

int count_leaf(Node* root)
{
    if(root==NULL) return 0;
    if(root->left==NULL && root->right==NULL)
    {
        return 1;
    }
    else
    {
        int l=count_leaf(root->left);
        int r=count_leaf(root->right);
        return l+r;
    }
}
int max_height(Node* root)
{
    if(root==NULL)return 0;
    int l= max_height(root->left);
    int r=max_height(root->right);

    return max(l,r)+1;
}
int main()
{
    Node* root = input_tree();
    int ans=count_leaf(root);
    int res=max_height(root)-1;
    int cnt=pow(2,res);
    if(ans==cnt-1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

