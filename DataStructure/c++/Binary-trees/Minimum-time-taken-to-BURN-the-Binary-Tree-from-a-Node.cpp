int findMaxDistance(map<TreeNode* , TreeNode*>&m , TreeNode* target){
  queue<TreeNode*>q;
  q.push(target);
  map<TreeNode*,int>vis;
  vis[target] = 1;
  int maxi = 0;
  while(!q.empty()){
    int sz = q.size();
    int fl = 0;
    for(int i = 0 ; i < sz ; i++){
      auto node = q.front();
      q.pop();
      if(node->left and !vis[node->left]){
        fl = 1;
        vis[node->left] = 1;
        q.push(node->left);
      }
      if(node->right and !vis[node->right]){
        fl = 1;
        vis[node->right] = 1;
        q.push(node->right);
      }
      if(map[node] and !vis[map[node]]){
        fl = 1;
        vis[map[node]] = 1;
        q.push(map[node]);
      }
    }
    if(fl) max++;
  }
  return maxi;
}
TreeNode* BfsToMapParents(TreeNode* root , map<TreeNode* , TreeNode*>&m , int start){
  queue<TreeNode*>q;
  q.push(root);
  TreeNode* res;
  while(!q.empty()){
    TreeNode* node = q.front();
    if(node->data == start) res = node;
    q.pop();
    if(node->left){
      m[node->left] = node;
      q.push(node->left);
    }
    if(node->right){
      m[node->right] = node;
      q.push(node->right);
    }
  }
  return res;
}
int timetoburntree(TreeNode* root , int start){
  map<TreeNode* , TreeNode*> m;
  TreeNode* target = BfsToMapParents(root , m , start);
  int maxi = findMaxDistance(m , target);
  return maxi;
}
