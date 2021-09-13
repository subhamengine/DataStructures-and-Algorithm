Maximum path sum  (https://leetcode.com/problems/binary-tree-maximum-path-sum/)

solution:
int maxpathdown(TreeNode* root,int& maxi){
        if(!root) return 0;
        int lh = max(0,maxpathdown(root->left , maxi));
        int rh = max(0,maxpathdown(root->right , maxi));
        maxi = max(maxi , lh + rh + root->val);
        return max(lh , rh) + root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxpathdown(root , maxi);
        return maxi;
    }
