int Lca(TreeNode *root, int a, int b) {
    if (root == NULL) return -1;
    if (root -> val == a || root -> val == b) return root -> val;
    int left = Lca(root -> left, a, b);
    int right = Lca(root -> right, a, b);
    if (left != -1 && right != -1) return root -> val;
    return (left != -1 ? left : right);
}

bool find(TreeNode *root, int v) {
    if (root == NULL) return false;
    if (root -> val == v) return true;
    return (find(root -> left, v) || find(root -> right, v));
}

int Solution::lca(TreeNode* root, int a, int b) {
    if (!find(root, a) || !find(root, b)) return -1;
    return Lca(root, a, b);
}
