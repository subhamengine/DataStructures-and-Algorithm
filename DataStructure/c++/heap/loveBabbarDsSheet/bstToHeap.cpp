vector<int>arr;
void inorder(Node* root){
  if(!root) return;
  inorder(root->left);
  arr.push_back(root->data);
  inorder(root->right);
}
int i = 0;
void convertHeap(Node* root , int *i){
  if(!root) return;
  root->data = arr[++*i];
  convertHeap(root->left);
  convertHeap(root->right);
}
void bstToMinHeap(Node* root){
  if(!root) return;
  inorder(root);
  int i = -1;
  convertHeap(root , &i);
}
