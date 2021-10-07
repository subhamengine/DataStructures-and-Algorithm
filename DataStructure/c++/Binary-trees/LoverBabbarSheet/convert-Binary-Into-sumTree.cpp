class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int help(Node* curr){
        if(curr == NULL) return 0;
        return curr->data + help(curr->left) + help(curr->right);
    }
    void toSumTree(Node *node)
    {
        if(node == NULL) return;
        node->data = help(node->left) + help(node->right);
        toSumTree(node->left);
        toSumTree(node->right);
    }
};
