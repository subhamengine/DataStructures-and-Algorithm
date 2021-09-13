//recursively

int maxdepth(TreeNode* root){
  if(root == NULL) return 0;
  int lh = maxdepth(root->left);
  int rh = maxdepth(root->right);
  return 1+max(lh,rh);
}

//Iteratively

 int maxDepth(TreeNode* root) {
        if (root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int depth = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            depth++;
        }
        return depth;
}
