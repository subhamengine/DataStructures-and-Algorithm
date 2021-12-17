class Solution {
  public:
  int size(struct Node* tree){
      if(!tree) return 0;
      return 1+size(tree->left)+size(tree->right);
  }
  bool istrue(struct Node* root , int index , int n){
      if(!root) return true;
      if(index >= n) return false;
      if((root->left and root->left->data >= root->data) or (root->right and root->right->data >= root->data)) return false;
      return istrue(root->left , 2*index+1 , n) and istrue(root->right , 2*index+2 , n);
  }
    bool isHeap(struct Node* tree) {
        if(!tree) return true;
        int n = size(tree);
        int index = 0;
        if(istrue(tree,index,n)) return true;
        else return false;
    }
};
