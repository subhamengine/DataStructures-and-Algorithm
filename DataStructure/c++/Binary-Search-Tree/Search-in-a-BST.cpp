TreeNode* searchInABst(TreeNode* root , int target){
  while(root!=NULL and root->val != target){
    root = target>root->val ? root->right : root->right;
  }
  return root;
}
