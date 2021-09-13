vector<vector<int>>verticalordertraversal(TreeNode* root){
  
  vector<vector<int>>ans;
  if(!root) return ans;
  
  map<int,map<int,multiset<int>>> nodes;
  queue<pair<TreeNode* , pair<int,int>>> todo;
  
  todo.push({root,{0,0}});
  
  while(!todo.empty()){
    
    auto p = todo.front();
    todo.pop();
    TreeNode* node = p.first;
    int x = p.second.first , y = p.second.second;
    
    nodes[x][y].insert(node->val);
    
    if(node->left){
      todo.push({node->left , {x-1 , y+1}});
    }
    if(node->right){
      todo.push({node->right , {x+1 , y+1}});
    }
  }
  
  for(auto p:nodes){
    
    vector<int>cal;
    
    for(auto q:p.second){
      cal.insert(cal.end() , q.second.begin() , q.second.end());
    }
    
    ans.push_back(cal);
  }
  return ans;
}
