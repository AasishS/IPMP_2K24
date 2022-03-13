
#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *left,*right;
};
node *createnode(int x)
{
    node *newnode= new node();
    newnode->data= x;
    newnode->left= NULL;  newnode->right= NULL; 
    return newnode;
}

int height(node *root)
{
    if(root==NULL)
     return 0;

    int l= height(root->left)+1;
    int r= height(root->right) +1;

    return max(l,r); 
}
int a=1000;
int check_level(node *root,int level)
{
    
    if(root== NULL ){
      return 1;}
      
    if(level== 1){
        if(root->left==NULL && root->right== NULL){
//             cout<<root->data<<" "; 
             return 1;
        }
         else
           return 0;
    }
    
    if(level> 1)
    {
        if(root->left==NULL && root->right== NULL)
             return 0;
    }
    
    int a1= check_level(root->left,level- 1);     
    int a2= check_level(root->right, level-1);

    if(a1==0 || a2==0)
       a= -1;

    return a;   
}

int main()
{
    // Let us create binary tree shown above
    node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->right = createnode(6);
    root->right->right->right= createnode(11);
 
    int h= height(root); 
    int k= check_level(root,h);
    if(k!= -1)
      cout<<"same level\n";
    else
      cout<<"\nnot same level";
      
    return 0;
}