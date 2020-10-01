bool flag;
int checkit(TreeNode* A) {
    if (!flag) return 0;
    if (A == NULL) return 0;
    int left, right;
    left = checkit(A->left);
    right = checkit(A->right);
    if (abs(left - right) >= 2) {
        flag = false;
        return 0;
    }
    return max(right, left) + 1;
}
int Solution::isBalanced(TreeNode* A) {
    flag = true;
    checkit(A);
    return flag;
}
