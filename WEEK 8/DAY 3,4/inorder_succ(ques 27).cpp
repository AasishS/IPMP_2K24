
#include <bits/stdc++.h>
using namespace std;

class node {
    public:
	int data;
	 node *left, *right;
};

node* newNode(int item)
{
	node* temp= new node();
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

node* p=NULL;
void inordersucc(node *root,int k)
{
    node *temp= root;
    if(p!=NULL)
      return;
    if(k== temp->left->data)
    {
        if(temp->left->right== NULL){
           p= temp; 
           return ;
        }
        else{
           temp= (temp->left)->right;
           while(temp->left!= NULL)
           {
               temp= temp->left;
           }

           p= temp; return ;
        }  
    }
    else if(k== temp->right->data)
    {
        if(temp->right->right== NULL){
          /* p= temp; */
           return ;}
           
        else{
           temp= (temp->right)->right;
           while(temp->left!= NULL)
           {
               temp= temp->left;
           }
           p= temp; return ;  }
    }
    
    if(k== temp->data)
    {
        temp= temp->right;
        while(temp->left!=NULL)
          temp= temp->left;
        
        p=temp; 
        return;
    }
    if(k< temp->data)
      inordersucc(temp->left,k); 
    if(k> temp->data)
      inordersucc(temp->right,k);   

}

// A utility function to do inorder traversal of BST
void inorder(node* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		printf("%d ", root->data);
		inorder(root->right);
	}
}

node* insert(node* Node, int k)
{
	if (Node == NULL)
		return newNode(k);

	if (k < Node->data)
		Node->left = insert(Node->left, k);
	else if (k > Node->data)
		Node->right = insert(Node->right, k);

	return Node;
}


int main()
{
    node* root = NULL;
	root = insert(root, 50);
	insert(root, 30);
	insert(root, 20);
	insert(root, 40);
	insert(root, 70);
	insert(root, 60);
	insert(root, 80);

	// print inoder traversal of the BST
	inorder(root);
    cout<<"enter node:";	int k; cin>>k;
	
    inordersucc(root,k);  cout<<"inorder succ:"<<p->data;
    
}



