#include<bits/stdc++.h>
using namespace std;

int sum=0;
class node
{
    public:
    int data;
    node *right,*left;
};

node* insert(node *root,int k)
{
    node *newnode= new node();
    newnode->data= k;  newnode->left=NULL; newnode->right= NULL;
    
    if(root== NULL){
      root= newnode;
      return root;
    }
    
    node *temp= root;  
    while(temp!= NULL)
    {
      if(k> temp->data ){
         if(temp->right!=NULL)
           temp= temp->right;
         else{
           temp->right= newnode; 
           break;
        }
      }
      if(k< temp->data){
         if(temp->left!= NULL)
           temp= temp->left ;
         else{
           temp->left= newnode; 
           break;
        }
      } 
    }
   return root;
}

void Inorder(node* root)
{
    if (!root) 
        return;    
    Inorder(root->left);
    cout << root->data<<" ";
    Inorder(root->right);
}


node* addsum(node *root)
{
    if(root== NULL)
       return NULL;
    
    addsum(root->right);   
    if(sum >root->data)
            root->data= root->data+ sum;
        sum= root->data;
        addsum(root->left);
        
        return root;
    
}
int main()
{
//balanced bst    
     node *root= NULL;
     root= insert(root,9);
     root= insert(root,11);
     root= insert(root,10);
     root= insert(root,5);
     
     cout<<"\ninitial BST: ";
     Inorder(root);
     
     root=addsum(root);
     cout<<"\nGreater BST: ";
     Inorder(root);
  
}