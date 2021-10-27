class Solution
{
    public:
    int x = 1;
    int kthLargest(Node *root, int k)
    {
        if (root == NULL) {
            return -1;
        }
        int ans = -1;
        ans = kthLargest(root->right, k);
        if (ans != -1) {
            return ans;
        }
        if (x == k) {
            return root->data;
        } 
        else {
            x++;
        }
        ans = kthLargest(root->left, k);
        if (ans != -1) {
            return ans;
        }
        return -1;
        
    }
};
