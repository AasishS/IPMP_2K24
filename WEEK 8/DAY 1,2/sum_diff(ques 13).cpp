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

int height(Node *root)
{
    if(root==NULL)
     return 0;

    int l= height(root->left)+1;
    int r= height(root->right) +1;

    return max(l,r); 
}

void levelorder(Node *root, int level,int *k)
{
    if(root== NULL)
      return ;
    if(level== 1)
    {
        *k = *k+ root->data; 
        return ;
    }
    else if(level >1)
    {
        levelorder(root->left,level-1,k);
        levelorder(root->right,level -1, k);
    }

    return ;
}

int sum_diff(Node *root)
{
    int sum_even=0,sum_odd=0;
    int h= height(root);
    for(int i=1; i<=h; i++) /* run levelorder trav for all levels*/
    {
        int k1=0,k2=0;
        if(i%2 == 1){
          levelorder(root,i,&k1); 
          sum_odd = sum_odd+ k1;}
        else{
          levelorder(root,i,&k2); 
          sum_even= sum_even+ k2;
        }
    }

    return sum_odd - sum_even;
}

int main()
{
   Node* root = createnode(5);
    root->left = createnode(2);
    root->right = createnode(6);
    root->left->left = createnode(1);
    root->left->right = createnode(4);
    root->left->right->left = createnode(3);
    root->right->right = createnode(8);
    root->right->right->right = createnode(9);
    root->right->right->left = createnode(7);
   
    cout<<"sum_diff= "<<sum_diff(root);
}