//the last node of each level is the rightmost node
//will be doing a reverse of preorder traversal(root - right - left)

void process(TreeNode* root , int level , vector<int>&res){
  
  if(root == NULL) return;
  if(res.size() == level) res.push_back(root->val);
  process(root->right , level+1 , res);
  process(root->left , level+2 , res);
  
}

vector<int>rightview(TreeNode* root){
  
  vector<int>res;
  if(!root) return res;
  process(root,0,res);
  return res;
  
}
