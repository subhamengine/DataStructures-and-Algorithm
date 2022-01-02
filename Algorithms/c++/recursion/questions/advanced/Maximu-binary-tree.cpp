/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>newVector(vector<int>nums , int s , int e){
        vector<int>ans;
        for(int i = s ; i <=e ; i++){
            ans.push_back(nums[i]);
        }
        return ans;
    }
    int maxi(vector<int>nums){
        int m = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > nums[m]) m = i;
        }
        return m;
        
    }
    TreeNode* help(vector<int>& nums){
        if(nums.size()==0) return NULL;
        if(nums.size() == 1){
            struct TreeNode* temp = new TreeNode(nums[0]);
            return temp;
        }
        
        //hypo
        int maxIndex = maxi(nums);
        
        vector<int>lfs = newVector(nums,0,maxIndex-1);
        vector<int>rfs = newVector(nums,maxIndex+1,nums.size()-1);
        struct TreeNode* root = new TreeNode(nums[maxIndex]);
        root->left = help(lfs);
        root->right = help(rfs);
        //induction
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return help(nums);
    }
};
