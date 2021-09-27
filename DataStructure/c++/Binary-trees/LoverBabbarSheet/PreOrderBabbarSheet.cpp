//recursion
voidpreOrder(Node* root){
  if(!root) return;
  cout<<root->data;
  preOrder(root->left);
  preOrder(root->right);
}

//Iterative
vector<int>preOrder(Node* root){
  vector<int>ans;
  if(!root) return ans;
  stack<Node*>st ;
  st.push(root);
  while(!st.empty()){
    Node* top = st.top();
    st.pop();
    ans.push_back(top->data);
    if(top->right) st.push(top->right);
    if(top->left) st.push(top->left);
  }
  return ans;
}
