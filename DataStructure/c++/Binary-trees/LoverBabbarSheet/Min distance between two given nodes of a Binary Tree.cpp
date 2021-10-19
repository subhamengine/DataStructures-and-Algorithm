class Solution{
    public:
    /* Should return minimum distance between a and b
    in a tree with given root*/
     Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(root == NULL or root->data == n1 or root->data == n2){
           return root;
       }
       Node* lef = lca(root->left , n1 , n2);
       Node* righ = lca(root->right , n1 , n2);
       
       if(!lef) return righ;
       else if(!righ) return lef;
       else return root;
       
    }
    int solve(Node* root , int val){
        if(!root) return 0;
        if(root->data == val) return 1;
        int a = solve(root->left , val);
        int b = solve(root->right , val);
        if(!a and !b) return 0;
        else return a+b+1;
    }
    int findDist(Node* root, int a, int b) {
        Node* ans = lca(root , a , b);
        int x = solve(ans , a);
        int y = solve(ans , b);
        return x+y-2;
    }
};
