int kthsmallestRes(TreeNode *root, int k, int &current) {
    if(root->left != NULL) {
        int res = kthsmallestRes(root->left, k, current);        
        if(current == k)
            return res;
    }
    ++current;
    if(current == k)
        return root->val;

    if(root->right != NULL) {
        int res = kthsmallestRes(root->right, k, current);        
        if(current == k)
            return res;
    }    
} 

int Solution::kthsmallest(TreeNode* root, int k) {
    int level = 0;
    return kthsmallestRes(root, k, level);
    
}
