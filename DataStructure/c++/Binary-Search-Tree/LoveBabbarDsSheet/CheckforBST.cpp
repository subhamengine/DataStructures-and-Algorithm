class Solution
{
    public:
    //Function to check whether a Binary Tree is BST or not.
    void func(Node* root , Node* &prev , int &f){
        if(!root) return;
        func(root->left , prev , f);
        if(prev!=NULL and root->data <= prev->data){
            f = 0;
            return;
        }
        prev = root;
        func(root->right , prev , f);
    }
    bool isBST(Node* root) 
    {
        int f = 1;
        Node* prev = NULL;
        func(root , prev , f);
        return f;
    }
};
