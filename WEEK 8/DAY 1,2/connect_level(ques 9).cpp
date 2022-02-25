#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *left,*right,*next;
};
Node *createnode(int x)
{
    Node *newnode= new Node();
    newnode->data= x;
    newnode->left= NULL;  newnode->right= NULL;  newnode->next= NULL;
    return newnode;
}

int height(Node *root)
{
    if(root== NULL)
      return -1;

    int l= height(root->left)+ 1;
    int r= height(root->right)+ 1;

    return max(l,r);  
}
vector<Node *> level_order(Node *root, int level)
{
    vector<Node *> v,l;
    if(root== NULL)
     return v;

    if(level> 1)
    {
        v= level_order(root->left, level-1);
        l.insert(l.end(),v.begin(),v.end());
        v=  level_order(root->right, level-1);
        l.insert(l.end(),v.begin(),v.end());

    } 
    if(level==1){
       v.push_back(root); 
       return v;
    }
    return l;
}
void connection(Node *root)
{
    vector<Node *> v;
    int h= height(root); int i=1; 
    while(i<= h+1){
    v.clear();    
    v= level_order(root,i); 
    for(int j=1; j<v.size(); j++)
    {
        Node *t= v[j-1]; Node *t1= v[j];
        t->next= t1;
    }
    i++;
    }
    
    cout<<root->data<<endl;
    while(1)
    {
        if(root==NULL)
          return;
        
        root= root->left; Node *t= root;
        while(t!= NULL)
        {
            cout<<t->data<<" ";
            t= t->next;
        }
        cout<<endl;
    }
}
int main()
{
    // Let us create binary tree shown above
    Node *root = createnode(1);
    root->left = createnode(2);
    root->right = createnode(3);
    root->left->left = createnode(4);
    root->left->right = createnode(5);
    root->right->right = createnode(6);
 
    connection(root);
    return 0;
}