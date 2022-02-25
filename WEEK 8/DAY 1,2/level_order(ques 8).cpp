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

void level_order(Node *root)
{
    
    queue<Node *> q;
    q.push(root);

    while(!q.empty())
    {
        Node *temp= q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left!=NULL)
           q.push(temp->left);
        if(temp->right!=NULL)   
           q.push(temp->right);
           
    }
}
int main()
{
    Node *root;
    root= createnode(27);
    root->left= createnode(1);
    root->right= createnode(2);
    root->right->right= createnode(8);
    root->left->right= createnode(5);
    root->left->right->left= createnode(7);
    
    level_order(root);
}