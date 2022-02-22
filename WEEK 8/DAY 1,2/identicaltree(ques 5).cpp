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

int find_identical(Node *root, Node *head)
{
   if(root==NULL && head==NULL)
     return 1;
   else if((root==NULL) ^ (head==NULL)==1)
     return -11000;
   else
   {
   if(root->data!= head->data)
     return -11200;
   else
   {
       return find_identical(root->left,head->left) + 
                         find_identical(root->right,head->right);
   }  }

}
int main()
{
    Node *root;
    root= createnode(27);
    root->left= createnode(3);
    root->right= createnode(9);
    root->right->right= createnode(5);
 //   root->right->left= createnode(2);
 //   root->right->left->left=  createnode(1);

    Node *head = createnode(27);
    head->left = createnode(3); 
    head->right= createnode(9);
    
    if( find_identical(root,head)> 0)
      cout<<"identical";  
    else
     cout<<"non identical";  
     
  //   cout<< find_identical(root,head);
}