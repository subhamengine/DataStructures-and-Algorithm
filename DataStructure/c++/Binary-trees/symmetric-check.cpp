bool issymetric(TreeNode* root){
  if(!root) return ;
  else return issymetrichelp(root->left,root->right);
}
bool issymetrichelp(TreeNode* left , TreeNode* right){
  if(left == NULL || right == NULL){
    return left==right;
  }
  if(left->val != right->val) return false;
  
  return issymetrichelp(left->left , right->right);
  return issymetrichelp(left->right , right->left);
}
