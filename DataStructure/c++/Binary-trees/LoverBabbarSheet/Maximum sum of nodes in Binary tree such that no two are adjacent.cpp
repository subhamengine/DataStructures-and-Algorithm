unordered_map<Node* , int>dp;

int func(node* root){
  if(!root) return 0;
  
  if(dp[root]) return dp[root];
  int inc = root->data;
  if(root->left){
    inc += func(root->left->left);
    inc += func(root->left->right);
  }
  if(root->right){
    inc += func(root->right->left);
    inc += func(root->right->right);
  }
  
  int exc = func(root->left) + func(root->right);
  
  dp[root] = max(inc , exc);
  return dp[root];
}
