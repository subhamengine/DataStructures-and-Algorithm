class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it.
    Node* dummy=new Node();
    Node* prev=NULL;
    Node* curr=dummy;
    Node * bToDLL(Node *root)
    {
        solve(root);
        Node* ans=dummy->right;
        ans->left=NULL;
        return ans;
    }
     void solve(Node* root)
    {
        if(root==NULL) return;
        solve(root->left);
        curr->right=root;
        prev=curr;
        curr=root;
        curr->left=prev;
        solve(root->right);
    }
};
