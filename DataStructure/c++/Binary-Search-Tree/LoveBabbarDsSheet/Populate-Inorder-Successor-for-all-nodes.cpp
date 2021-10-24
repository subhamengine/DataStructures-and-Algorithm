class Solution
{
public:
    void help(Node* root , Node* &prev){
        if(!root) return;
        help(root->left , prev);
        if(prev != NULL){
            prev->next = root;
        }
        prev = root;
        
        help(root->right , prev);
        
    }
    
    void populateNext(Node *root)
    {
        Node* prev = NULL;
        help(root , prev);
        
    }
};
