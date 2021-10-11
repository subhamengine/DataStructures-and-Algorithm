class Solution{
  public:
  int ans = 1;
    /*You are required to complete this method*/
    void solve(Node* root , int h , int &ma){
        if(root == NULL) return;
        if(ans == 0) return;
        if(root->left == NULL and root->right == NULL){
            if(ma == -1){
                ma = h;
            }
            else{
                if(h != ma){
                    ans = 0;
                }
            }
        }
        solve(root->left , h+1 , ma);
        solve(root->right , h+1 , ma);
    }
    bool check(Node *root)
    {
        if(!root) return false;
        int ma = -1;
        solve(root , 0 , ma);
        return ans;
    }
};
