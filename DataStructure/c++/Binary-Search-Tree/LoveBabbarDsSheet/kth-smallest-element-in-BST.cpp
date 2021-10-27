class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int x = 1;
    int KthSmallestElement(Node *root, int k) {
        if (root == NULL) {
            return -1;
        }
        int ans = -1;
       ans = KthSmallestElement(root->left, k);
        if (k == x) {
            ans = root->data;
        }
        x++;
        if (ans == -1) {
         ans = KthSmallestElement(root->right, k);   
        }
        return ans;
    }
};
