class Solution
{
public:
    vector<int> help(Node* root){
        if(!root) return {0,0};
        vector<int>a = help(root->left);
        vector<int>b = help(root->right);
        
        if(a[0] > b[0]) return {a[0]+1 , a[1] + root->data};
        if(a[0] < b[0]) return {b[0]+1 , b[1] + root->data};
        else return {a[0] + 1 , max(a[1] , b[1]) + root->data};
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        vector<int> ans = help(root);
        return ans[1];
        
    }
};
