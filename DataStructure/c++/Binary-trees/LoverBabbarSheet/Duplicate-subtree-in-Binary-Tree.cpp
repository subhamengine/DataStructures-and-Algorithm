class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    unordered_map<string , int>m;
    string solve(Node* root){
        if(!root) return "$";
        string s = "";
        if(!root->left and !root->right){
            s = to_string(root->data);
            return s;
        }
        s = s + to_string(root->data);
        s = s + solve(root->left);
        s = s + solve(root->right);
        m[s]++;
        return s;
        
    }
    int dupSub(Node *root) {
        m.clear();
        solve(root);
        for(auto x:m){
            if(x.second >= 2) return 1;
        }
        return 0;

    }
};
