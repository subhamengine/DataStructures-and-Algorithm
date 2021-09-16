TreeNode* lowestcommonancestor(TreeNode* root , TreeNode* p , TreeNode* q){
  
  if(root == NULL || root == p || root == q){
    return root;
  }
  
  TreeNode* left = lowestcommonancesstor(root->left , p , q);
  
  TreeNode* right = lowestcommonancesstor(root->right , p , q);
  
  if(left == NULL) return right;
  
  else if(right == NULL) return left;
  
  else return root;
}
