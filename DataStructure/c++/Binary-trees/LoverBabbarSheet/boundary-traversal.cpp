
bool isleaf(Node* root){
  if(!root->left and !root->right) return true;
  else return false;
}

void addleftboundary(Node* root , vector<int>&res){
  Node* cur = root->left;
  while(cur){
    if(!isleaf(cur)) res.push_back(cur->val);
    if(cur->left) cur = cur->left;
    else cur = cur->right;
  }
}

void addrightboundary(Node* root , vector<int>&res){
  Node* cur = root->right;
  vector<int>temp;
  while(cur){
    if(!isleaf(cur)) temp.push_back(cur->val);
    if(cur->right) cur = cur->right;
    else cur = cur->left;
  }
  for(int i = temp.size()-1 ; i >= 0 ; i--){
    res.push_back(temp[i]);
  }
}

void addleaves(Node* root , vector<int>&res){
  if(isleaf(root)){
    res.push_back(root->val);
    return;
  } 
  if(root->left) addleaves(root->left , res);
  if(root->right) addleaves(root->right , res);
  
}

vector<int>printboundary(Node* root){
  vector<int>res;
  if(!root) return res;
  if(!isleaf(root)) res.push_back(root->val);
  addleftboundary(root , res);
  addleaves(root,res);
  addrightboundary(root , res);
  return res;
}
