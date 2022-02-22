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

void inorder(Node *root)
{
    if(root==NULL)
      return;

    else{
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }  
}

void preorder(Node *root)
{
    if(root==NULL)
      return;

    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }  
}

void postorder(Node *root)
{
    if(root==NULL)
      return;

    else{
        
        postorder(root->left);
        postorder(root->right);
        cout<< root->data<<" ";
    }  
}

int main()
{
    Node *root;
    root= createnode(27);
    root->left= createnode(3);
    root->right= createnode(9);
    root->right->right= createnode(5);
    root->right->left= createnode(4);

    cout<<"inorder: ";inorder(root);
    cout<<"\npreorder: ";preorder(root);
    cout<<"\npostorder: "; postorder(root);
}