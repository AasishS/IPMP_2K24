class Solution{
public:
    int ans=1;
    TreeNode *temp= NULL;
    bool isValidBST(TreeNode* root)  //inorder trav to check if previous node< root;
    {
        
        if(root==NULL)
            return true;
        
        bool t1=isValidBST(root->left);
        if(!t1)
            return false;
        
          if(temp!=NULL && temp->val>= root->val)
              return false;
              temp= root;
        
        bool t2=isValidBST(root->right);
        if(!t2)
            return false;
        
        return true;
    }
};