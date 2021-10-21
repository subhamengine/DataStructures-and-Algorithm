Node* search(Node* root , int key){
  if(root == NULL or root->data == key) return root;
  if(root->data < key){
   return search(root->right , key);
  }
  return search(root->left , key);
}
