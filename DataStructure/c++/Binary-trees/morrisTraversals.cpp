vector<int>morristraversals(TreeNode* root){
  vector<int>inorder;
  TreeNode* curr = root;
  while(curr != NULL){
    if(curr->left == NULL){
      inorder.push(curr->val);
      curr = curr->right;
    }
    else{
      TreeNode* prev = curr->left;
      while(prev->left and prev->left != curr){
        prev = prev->right;
      }
      if(prev->right == NULL){
        prev->right = curr;
        curr = curr->left;
      }
      else{
        prev->right = NULL;
        inorder.push(curr->val);
        curr = curr->right;
      }
    }
  }
  return preorder;
}
