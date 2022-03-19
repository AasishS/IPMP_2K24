#include<bits/stdc++.h>
using namespace std;
int ls,rs;
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

int check_sumtree(Node *root)
{
    if(root==NULL )
       return 0;

     int ls= check_sumtree(root->left);
     int rs= check_sumtree(root->right);  
    
    if(ls==-1000|| rs== -1000)
      return -1000;
    if(ls+ rs== root->data || (root->left==NULL && root->right== NULL))
    {
        return ls+ rs+ root->data;
    }
    else
    return -1000;
        
}
int main()
{
   Node* root = createnode(26);
    root->left = createnode(10);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(6);
  //  root->left->right->left = createnode(3);
    root->right->right = createnode(3);
 //   root->right->right->right = createnode(2);
 //   root->right->right->left = createnode(1);
   
    cout<<"ans= "<<check_sumtree(root);
}