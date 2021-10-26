vector<Node*> inorder;
start = 0;
end = n;

Node* solve(int start , int end){
  if(start > end) return NULL;
  
  int mid = (start+end)/2;
  Node* root = inorder[mid];
  
  node->left = solve(start , mid-1);
  node->right = solve(mid+1 , end);
  return root;
}
