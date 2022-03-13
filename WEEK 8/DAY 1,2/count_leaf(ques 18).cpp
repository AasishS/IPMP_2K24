#include<bits/stdc++.h>
using namespace std;

int count;
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

void count_leaf(Node *root, int *count) //parallel of inorder trav
{
    if(root==NULL)
       return;
    
    count_leaf(root->left,count);
    
    if(root->left== NULL && root->right==NULL){
       *(count)= *count+ 1;
       }
    count_leaf(root->right,count) ;  
    
 
}

int main()
{
    Node* root = createnode(5);  int c=0;
    root->left = createnode(2);
    root->right = createnode(6);
    root->left->left = createnode(1); //leaf
    root->left->right = createnode(4);
    root->left->right->left = createnode(3); //leaf
    root->right->right = createnode(8);
    root->right->right->right = createnode(9); //leaf
    root->right->right->left = createnode(7); //leaf
    
    count_leaf(root,&c);  
    cout<<"leafnodes: "<<c;
}