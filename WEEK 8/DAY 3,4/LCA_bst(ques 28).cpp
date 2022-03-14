#include<bits/stdc++.h>
using namespace std;

int ind=0;  int result=-1;
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

node *ans= NULL;
void LCA(node *root,int a,int b) // a > b
{
    while(root!=NULL)
    {
        if(root->data < a && root->data >b){
            ans= root;
           break;
        }
        if(root->data== a){
          ans= root;
          break;
        }
        if(root->data== b){
         ans= root; 
         break;
        }
        if(root->data > a)
          root= root->left;

        if(root->data < b)
          root= root->right;  
    }
}
int main()
{
     node *root = NULL;
     root= insert(root,20);
    root->left = insert(root->left,8);
    root->right = insert(root->right,22);
    root->left->left = insert(root->left->left,4);
    root->left->right = insert(root->left->right,12);
    root->left->right->left = insert(root->left->right->left,10);
    root->left->right->right =insert(root->left->right->right,14);
     Inorder(root);
     
     int a,b; cout<<"\nenter pairs"; cin>>a>>b;
     if(a< b)
     {
         b= a+b;
         a= b-a;
         b= b-a;
     }
  //   find_kth_smallest(root,k);
    LCA(root,a,b);
     cout<<ans->data;
}