class Solution{
    public:
    Node* help(int pre[] , int ps , int pe , int in[] , int is , int ie , unordered_map<int,int>inMap){
        if((ps > pe) or (is > ie)) return NULL;
        
        Node* root = new Node(pre[ps]);
        
        int inroot = inMap[root->data];
        int numsLeft = inroot - is;
        
        root->left = help(pre , ps+1 , pe + numsLeft , in , is , inroot - 1 , inMap);
        root->right = help(pre , ps + numsLeft + 1 , pe , in , inroot + 1 , ie , inMap );
        return root;
    }
    
    Node* buildTree(int in[],int pre[], int n)
    {
        unordered_map<int,int>inMap;
        for(int i = 0 ; i < n ; i++){
            inMap[in[i]] = i;
        }
        Node* root = help(pre , 0 , n-1 , in , 0 , n-1 , inMap);
        return root;
    }
};
