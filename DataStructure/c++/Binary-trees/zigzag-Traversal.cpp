vector<vector<int>>zigzagorder(Node* root){
  
  vector<vector<int>>result;
  if(!root) return result;
  
  queue<Node*>nodequeue;
  nodequeue.push(root);
  
  bool lefttoright = true;
  
  while(!nodequeue.empty()){
    int size = nodequeue.size();
    vector<int>row(size);
    for(int i = 0 ; i < size ; i++){
      Node* temp = nodequeue.front();
      nodequeue.pop();
      
      int index = (lefttoright)? i : (size-1-i);
      
      row[index] = node->val;
      
      if(node->left) nodequeue.push(node->left);
      if(node->right) nodequeue.push(node->right);
      
    }
    lefttoright = !lefttoright;
    result.push_back(row);
  }
  return result;
}
