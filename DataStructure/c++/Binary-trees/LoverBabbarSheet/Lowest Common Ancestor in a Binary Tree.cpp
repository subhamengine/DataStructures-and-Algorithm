class Solution
{
    public:
    //Function to return the lowest common ancestor in a Binary Tree.
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
};
