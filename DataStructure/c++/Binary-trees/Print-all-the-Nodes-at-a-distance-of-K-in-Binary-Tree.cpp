void markparents(TreeNode* root , unordered_map<TreeNode* , TreeNode*>&parenttrack , TreeNode* target){
  queue<TreeNode*>q;
  q.push(root);
  while(!q.empty()){
    TreeNode* current = q.front();
    q.pop();
    if(current->left){
      parenttrack[current->left] = current;
      q.push(current->left);
    }
    if(current->right){
      parenttrack[current->right] = current;
      q.push(current->right);
    }
  }
}
vector<int> distancek(TreeNode* root , TreeNode* target , int k){
  unordered_map< TreeNode* , TreeNode* >parenttrack;
  markparents(root , parenttrack , target);
  
  unordered_map<TreeNode* , bool> visited;
  queue<TreeNode*>q;
  q.push(target);
  visited[target] = true;
  int curr_level = 0;
  while(!q.empty()){
    int size = q.size();
    if(curr_level ++= k) break;
    for(int i = 0 ; i < size ; i++){
      TreeNode* current = q.front();
      q.pop();
      if(current->left and !visited[current->left]){
        q.push(current->left);
        visited[current->left] = true;
      }
      if(current->right  and !visited[current->right]){
        q.push(current->right);
        visited[current->right] = true;
      }
      if(parenttrack[current] and !parenttrack[visited[current]]){
        q.push(parenttrack[current]);
        visited[parenttrack[current]] = true;
      }
    }
  }
  vector<int> ans;
  while(!q.empty()){
    ans.push_back(q.front()->data);
    q.pop();
  }
  return ans;
}
