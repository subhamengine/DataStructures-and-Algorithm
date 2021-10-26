class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void lastinorder(Node* &root , vector<int>&v , int &index){
        if(!root) return;
        lastinorder(root->left , v , index);
        root->data = v[index];
        index++;
        lastinorder(root->right , v , index);
        
    }
    void inorder(Node* root , vector<int>&v){
        if(!root) return;
        inorder(root->left , v);
        v.push_back(root->data);
        inorder(root->right , v);
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int>v;
        inorder(root , v);
        sort(v.begin() , v.end());
        int index = 0;
        lastinorder(root , v , index);
        return root;
    }
};
