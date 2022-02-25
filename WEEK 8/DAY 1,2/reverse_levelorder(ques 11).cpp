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
void reverse_levelorder(Node *root)
{
    list<Node *> li;
    li.push_back(root); 
    list<Node *>:: iterator it= li.begin();

    while(it!= li.end())
    {
        Node *t= *it;
        if(t->right!=NULL )
         li.push_back(t->right);  
        if(t->left !=NULL )
         li.push_back(t->left);

        it++;
    }

    for(auto i= li.rbegin(); i!= li.rend(); i++)
    {
        Node *ti= *i;
     cout<<ti->data <<" ";
    }
}
int main()
{
    Node *root;
    root= createnode(27);
    root->left= createnode(1);
    root->right= createnode(2);
    root->right->right= createnode(8);
    root->left->right= createnode(5);
    root->left->right->left= createnode(7);
    
    reverse_levelorder(root);

}