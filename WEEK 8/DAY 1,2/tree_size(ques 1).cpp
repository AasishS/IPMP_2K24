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
int find_size(Node *root)
{
    if(root== NULL){
        return 0;
    }
    else
    {
        return find_size(root->left) + find_size(root->right)+ 1;
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

    cout<<"size: "<<find_size(root)<<endl;;
}