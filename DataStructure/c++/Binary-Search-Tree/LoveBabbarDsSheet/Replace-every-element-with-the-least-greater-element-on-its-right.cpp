
Node* insert(Node* node , int data , Node* &succ){
  if(node == NULL) return node = new Node(data);
  if(data < node->data){
    succ = node;
    node->left = insert(node->left , data , succ);
  }
  else if(data > node->data){
    return node->right = insert(node->right , data , succ);
  }
  return node;
}
void replace(int arr[] , int n){
  Node* root = NULL;
  for(int i = n - 1 ; i >= 0 ; i-- ){
    Node* succ = NULL;
    root = insert(root , arr[i] , succ);
    if(succ) arr[i] = succ->data;
    else arr[i] = -1;
  }
}
