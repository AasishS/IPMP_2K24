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


void find_kth_smallest(node *root,int k)
{
    if(root== NULL)
       return ;
       
    if(result==-1 )
    {
    find_kth_smallest(root->left,k);
    
    ind++;
    if(k== ind){
         result= root->data; 
         return;
      }
    
     find_kth_smallest(root->right,k);     
    }
    
}
int main()
{
     node *root= NULL;
     root= insert(root,9);
     root= insert(root,11);
     root= insert(root,10);
     root= insert(root,5);
     
     Inorder(root);
     
     int k; cout<<"\nenter order"; cin>>k;
     find_kth_smallest(root,k);
     cout<<result;
}