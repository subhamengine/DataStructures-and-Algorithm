int findCeil(TreeNode* root , int key){
  int ceili = -1;
  while(root){
    if(root->val == key){
      ceili = root->data;
      return ceili;
    }
    if(key > root->val){
      root = root->right;
    }
    else{
      ceili = root->val;
      root = root->left;
    }
  }
  return ceili;
}
