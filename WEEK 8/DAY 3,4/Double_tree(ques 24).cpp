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

Node* trav(Node *root) //parallel of inorder trav
{
    if(root==NULL)
      return NULL;

    trav(root->left);
    
    int k= root->data;  Node *temp= createnode(k);
    Node *temp1= root->left;
    root->left= temp;
    temp->left= temp1;

    trav(root->right);  
    
    return root;
 
}

void inorder(Node *root)
{
    if(root== NULL)
      return;
    
    inorder(root->left);
      cout<<root->data<<" ";
    inorder(root->right);  
}
int main()
{
    Node* root = createnode(5);  int c=0;
    root->left = createnode(2);
    root->right = createnode(6);
    root->left->left = createnode(1);
    root->left->right = createnode(4);
   
    cout<<"inorder: "; 
    inorder(root);
    
    Node* t= trav(root);
    
    cout<<"\ninorder double tree: ";
    inorder(t);
    
}