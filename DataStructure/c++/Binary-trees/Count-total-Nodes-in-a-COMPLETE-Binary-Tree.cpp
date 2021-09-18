int cnt = 0;
int countNodes(TreeNode* root) {
        if(!root) return 0;
        cnt++;
        countNodes(root->left);
        countNodes(root->right);
        return cnt;
    }
