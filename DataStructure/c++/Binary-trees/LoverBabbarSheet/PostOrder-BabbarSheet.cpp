//recursion
void PostOrder(Node* root){
  if(!root) return;
  PostOrder(root->left);
  PostOrder(root->right);
  cout<<root->data;
}

//Iterative(2 stacks)
Vector<int>PostOrder(Node* root){
  Vector<int>ans;
  if(!root) return ans;
  stack<Node*>st1 , st2;
  st1.push(root);
  while(!st1.empty()){
    Node* top = st1.top();
    st1.pop();
    st2.push(top);
    if(top->left) st1.push(top->left);
    if(top->right) st1.push(top->right);
  }
  while(!st2.empty()){
    ans.push_back(st2.top()->data);
    st2.pop();
  }
}
//Iteratie(1 stack)
Vector<int>PostOrder(Node* root){
  vector<int>ans;
  if(!root) return;
  stack<Node*> st;
  Node* curr = root;
  while(curr!=NULL || !st.empty()){
    if(curr!=NULL){
      st.push(curr);
      curr = curr->left;
    }
    else{
      temp = st.top()->right;

      if(temp == NULL){
        temp = st.top();
        st.pop();
        ans.psuh_back(temp->data);
        while(!st.empty() and st.top()->right == temp){
          temp = st.top();
          st.pop();
          ans.push_back(temp->data);
        }
      }
      else curr = temp;
    }
  }
}
