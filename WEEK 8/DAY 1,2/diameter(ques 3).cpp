#include <bits/stdc++.h>
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

int height(Node *root)
{
    if(root==NULL)
     return 0;

    int l= height(root->left); 
    int r= height(root->right);

    return max(l,r)+1 ;

}

int diameter(Node *root, int max) //preorder traversal
{
    if(root==NULL)
      return max;


    int l= height(root->left);  int r= height(root->right);
    int result= r+l+1 ;
    max= max >result? max: result;

    
    max= diameter(root->left,max);
    max= diameter(root->right,max);

  return max;  
}

int main()
{
    Node* root =createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->right = createnode(8);

    cout<<"diameter: "<<diameter(root,0);
}