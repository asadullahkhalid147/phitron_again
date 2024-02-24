#include<bits/stdc++.h>
using namespace std;
vector<int>vec;
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
void print_leaf(Node* root)
{
    if(root==NULL) return ;
    if(root->left==NULL && root->right==NULL)
    {
        vec.push_back(root->val);
    }
    else
    {
        print_leaf(root->left);
        print_leaf(root->right);
        
    }
}
int main()
{
    Node* root = input_tree();
    print_leaf(root);
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto it:vec)
    {
        cout<<it<<" ";
    }
    return 0;
}

