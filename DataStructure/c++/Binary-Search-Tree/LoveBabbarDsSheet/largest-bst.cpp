class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a 
    vector<int>solve(Node* root){
        if(!root) return {1,0,INT_MAX,INT_MIN};
        if(!root->left and !root->right) return {1,1,root->data,root->data};
        vector<int>l = solve(root->left);
        vector<int>r = solve(root->right);
        if(l[0] and r[0]){
            if(root->data > l[3] and root->data < r[2]){
                int x = l[2];
                int y = r[3];
                if(x == INT_MAX) x = root->data;
                if(y == INT_MIN) y = root->data;
                return {1 , l[1]+r[1]+1 , x , y};
            }
        }
        return {0, max(l[1] , r[1]) , 0 , 0};
    }
    int largestBst(Node *root)
    {
    	vector<int>ans;
    	if(!root) return 0;
    	ans = solve(root);
    	return ans[1];
    }
};
