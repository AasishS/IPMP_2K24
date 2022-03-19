class Solution {
public:
    int height(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        
        int l= height(root->left);
        int r=height(root->right);
        
        return max(l,r)+1;
    }
    bool isBalanced(TreeNode* root)
    {
        if(root==NULL)
            return true;
        
        bool k1=isBalanced(root->left);
         int l= height(root->left)- height(root->right);;
        
        bool k2=isBalanced(root->right);
        
        if(k1==false|| k2==false)
            return false;
        if(l>1 || l<-1)
            return false;
        
        return true;
    }
};