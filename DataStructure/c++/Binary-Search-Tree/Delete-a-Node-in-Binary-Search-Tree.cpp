TreeNode* deletenode(TreeNode* root , int key){
  if(!root) return NULL;
  if(root->val == key) return helper(root);
  TreeNode* dummy = root;
  while(root != NULL){
    if(root->val > key){
      if(root->left != NULL and root->left->val == key){
        root->left = helper(root->left);
        break;
      }
      else{
        root = root->left;
      }
    }
    else{
      if(root->right != NULL and root->right->val == key){
        root->right = helper(root->right);
        break;
      }
      else root = root->right;
    }
  }
  return dummy;
}

TreeNode* helper(TreeNode* root){
  if(root->left == NULL) return root->right;
  else if(root->right == NULL) return root->left;
  TreeNode* rightchild = root->right;
  TreeNode* lastright = findlast(root->left);
  lastright->right = rightchild;
  return root->left;
}

TreeNode* findlast(TreeNode* root){
  if(root->right == NULL) return root;
  else return findlast(root->right);
}
