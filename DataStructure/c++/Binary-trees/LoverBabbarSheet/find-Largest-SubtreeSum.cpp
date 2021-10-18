ans = INT_MIN;

int findLargestSubtreeSum(Node *root , int &ans){
  int (!root) return 0;
  int currsum = root->data + findLargestSubtreeSum(root->left , ans) + findLargestSubtreeSum(root->right , ans);
  ans = max(ans , currsum);
  return ans;
}
