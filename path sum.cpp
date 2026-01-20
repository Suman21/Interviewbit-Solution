int hasSum(TreeNode* root, int sum)
{
    if(!root->left && !root->right)
    {
        if(sum==root->val)
            return 1;
        else
            return 0;
    }
    
    int x = 0, y = 0;
    if(root->left)
        x = hasSum(root->left, sum - root->val);
    if(root->right)
        y = hasSum(root->right, sum - root->val);
        
    return x || y;
}

int Solution::hasPathSum(TreeNode* A, int B) {
    
    if(!A && !B)    return 1;
    if(!A && B)     return 0;
    
    return hasSum(A,B);
    
}
