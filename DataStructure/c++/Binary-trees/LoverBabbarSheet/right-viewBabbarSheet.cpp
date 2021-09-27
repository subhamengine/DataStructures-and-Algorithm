class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void process(Node* root , int level , vector<int>&ans){
        if(root == NULL) return;
        if(ans.size() == level) ans.push_back(root->data);
        process(root->right , level+1 , ans);
        process(root->left , level+1 , ans);
    }
    vector<int> rightView(Node *root)
    {
       vector<int>ans;
       if(!root) return ans;
       process(root , 0 , ans);
       return ans;
    }
};
