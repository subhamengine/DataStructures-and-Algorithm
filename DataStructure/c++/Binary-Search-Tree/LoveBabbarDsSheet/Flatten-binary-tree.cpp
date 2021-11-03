class Solution
{
    public:
    Node* prev = NULL;
    void flatten(Node *root)
    {
        if(root == NULL) return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = NULL;
        prev = root;
    }
};
