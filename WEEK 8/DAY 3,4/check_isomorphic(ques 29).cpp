bool isomorphic(Node *root1,Node *root2)
{    
    if(root1==NULL && root2==NULL){
        return true;
    }
    if(root1==NULL || root2==NULL) 
        return false;
    
    if(root1->data!= root2->data)
       return false;

    else{   
         bool t1= isomorphic(root1->left,root2->left) && isomorphic(root1->right,root2->right);
         bool t2= isomorphic(root1->left,root2->right) && isomorphic(root1->right,root2->left);
    }
      return t1| t2;
}