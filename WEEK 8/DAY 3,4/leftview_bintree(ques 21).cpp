#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
	int data;
	node *left, *right;
};

node *newNode(int item)
{
	node *temp = new node();
	temp->data = item;
	temp->left = temp->right = NULL;
	return temp;
}

// level order traversal with 1st node of each level
vector<node*> v;
void level_order(node *root)
{
    queue<node *> q;  queue<node *>q1;
    q.push(root);  int level=0;
    v.push_back(root);
    while(!q.empty())
    {
        node *temp= q.front();
        if(level==1){
          v.push_back(temp);  level--;}
        q.pop();
        node *t1= temp->left; node *t2= temp->right;
        if(t1!= NULL)
          q1.push(t1);
        if(t2!= NULL)
          q1.push(t2);  

        if(q.empty()){
          swap(q,q1);  
          level=1;
        }
    }
}
int main()
{
	node* root = newNode(10);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(7);
	root->left->right = newNode(8);
	root->right->right = newNode(15);
	root->right->left = newNode(12);
	root->right->right->left = newNode(14);

level_order(root);

cout<<"left-view: ";
vector<node *>:: iterator it;
for(it= v.begin(); it!= v.end();it++)
{
    node *k= *it;
    cout<<k->data<< " ";
}
  

	return 0;
}
