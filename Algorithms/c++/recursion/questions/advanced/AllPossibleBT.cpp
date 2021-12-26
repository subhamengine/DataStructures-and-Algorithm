vector<TreeNode*> allPossibleFBT(int n) {
        vector<TreeNode*>res;
        if(n%2 == 0){
            return res;
        }
        if(n == 1){
            res.push_back(new TreeNode(0));
            return res;
        }
        for(int i = 1 ; i < n ; i+=2){
            vector<TreeNode*> left = allPossibleFBT(i);
            vector<TreeNode*> right = allPossibleFBT(n-i-1);
            for(TreeNode* l:left){
                for(TreeNode* r:right){
                    TreeNode* root = new TreeNode(0);
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }
            }
        }
    return res;
    }
