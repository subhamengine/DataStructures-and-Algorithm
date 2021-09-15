bool getpath(TreeNode* root , vector<int>&arr , int b){
  if(!root) return false;
  arr.push_back(root->val);
  
  if(root->valv == b) return true;
  
  if(getpath(root->left , arr , b) or getpath(root->right , arr , b)){
    return true;
  }
  arr.pop_back();
  return false;
}


vector<int>solve(TreeNode* root , int b){
  vector<int>arr;
  if(!root) return arr;
  getpath(root,arr,b);
  return arr;
}
