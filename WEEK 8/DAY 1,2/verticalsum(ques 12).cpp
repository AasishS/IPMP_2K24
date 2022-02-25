#include<bits/stdc++.h>
using namespace std;

std::map<int,int> M;
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
void traversal(Node *root, int HD)
{
   if(root== NULL)
     return;

   M[HD] += root->data;
   traversal(root->left, HD-1);
   traversal(root->right, HD +1);
};

int main()
{
    Node *root;
    root= createnode(27);
    root->left= createnode(1);
    root->right= createnode(2);
    root->left->left= createnode(11);
    root->left->right= createnode(5);
    root->right->left= createnode(7);
    root->right->right= createnode(8);

    traversal(root,0);
    cout<<"vertical sum\n";
    map<int,int>:: iterator it= M.begin();
    for(it; it!= M.end(); it++)
     cout<<it->second<<" ";
}