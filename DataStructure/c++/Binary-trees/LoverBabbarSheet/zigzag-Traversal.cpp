class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	vector<int>result;
        if(!root) return result;
  
  queue<Node*>nodequeue;
  nodequeue.push(root);
  
  bool lefttoright = true;
  
  while(!nodequeue.empty()){
    int size = nodequeue.size();
    vector<int>row(size);
    for(int i = 0 ; i < size ; i++){
      Node* node = nodequeue.front();
      nodequeue.pop();
      
      int index = (lefttoright)? i : (size-1-i);
      
      row[index] = node->data;
      
      if(node->left) nodequeue.push(node->left);
      if(node->right) nodequeue.push(node->right);
      
    }
    lefttoright = !lefttoright;
    for(int j = 0 ; j < row.size() ; j++) result.push_back(row[j]);
    }
    return result;
    }
};
