Node* mirror(Node* root){
  if(!root) return ;
  Node* t  = root->left;
  root->left = root-right;
  root->right = t;
  if(root->left) mirror(root->left);
  if(root->right) mirror(root->right);
  return root;
}
