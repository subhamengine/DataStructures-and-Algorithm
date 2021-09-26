//recursion

inorder(node){
  if(node == NULL) return;
  inorder(node->left);
  print(node->data);
  inorder(node->right);
}

time complexity = 0(N)
space complexity = 0(N)

//Iterative

vector<int>inorder(Node* root){
  vector<int>ans;
  if(!root) return ans;
  stack<Node*>st;
  Node* node = root;
  while(true){
    if(node!=NULL){
      st.push(node);
      node = node->left;
    }
    else{
      if(st.empty()) break;
      node = st.top();
      st.pop();
      ans.push_back(node->data);
      node = node->right;
    }
  }
  return ans;
}
