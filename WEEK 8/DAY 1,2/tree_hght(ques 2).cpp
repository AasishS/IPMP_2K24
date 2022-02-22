#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right;
};
Node *createnode(int x)
{
    Node *newnode= new Node();
    newnode->data= x;
    newnode->left= NULL;  newnode->right= NULL;
    return newnode;
}


int tree_height(Node *root)
{
    if(root==NULL)
      return -1;
    else
    {
        int l,r,h;
        l = tree_height(root->left);
        r= tree_height(root->right);

        h= max(l,r);
        return h+ 1 ;
    }  
}
int main()
{
    Node *root;
    root= createnode(27);
    root->left= createnode(3);
    root->right= createnode(9);
    root->right->right= createnode(5);
    root->right->left= createnode(4);
    root->right->left->left=  createnode(1);

    cout<<"height- "<<tree_height(root);
}