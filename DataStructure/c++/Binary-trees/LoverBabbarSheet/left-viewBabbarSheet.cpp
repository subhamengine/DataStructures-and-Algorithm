void process(Node* root , int level , vector<int>&ans){
    if(root == NULL) return;
    if(ans.size() == level) ans.push_back(root->data);
    process(root->left , level+1 , ans);
    process(root->right , level+1 , ans);
}
vector<int> leftView(Node *root)
{
   vector<int>ans;
   if(!root) return ans;
   process(root , 0 , ans);
   return ans;
}
