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

int getWidth(node* root, int level);
int height(node* node);
 
/* Function to get the maximum width of a binary tree*/
int getMaxWidth(node* root)
{
    int max= 0; int w;
    int h = height(root);
    int i;
 
    for (i = 1; i <= h; i++) 
    {
        w = width(root, i);
        if(w > max)
            max = w;
    }
 
   cout << "Maximum width: "<<max;
}
 
/* Get width of a given level */
int width(node* root, int level)
{ 
    if (root == NULL)
        return 0;
 
    if (level == 1)
        return 1;
 
    else if (level > 1)
        return width(root->left, level- 1) + width(root->right, level- 1);
}
 

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {        
        int l = height(node->left);
        int r = height(node->right);
       
         return (l> r) ? (l + 1):(r + 1);
    }
}

int main()
{
    Node* root =createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->right = createnode(8);
    root->right->right->left =createnode(6);
    root->right->right->right =createnode(7);
 
    getMaxWidth(root);
}