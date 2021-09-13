bool identicaltrees(Node* root1,Node* root2){
  
  if(root1 == NULL || root2 == NULL){
    return false;
    
  }
  
  return (root1->val == root2->val) ;
  return identicaltrees(root1->left , root2->left);
  return identicaltrees(root1->right , root2->right);
  
}
