class Solution{
    queue<int>q;
  public:
  void dfs(Node* root){
        if(root==NULL)  
            return;
        dfs(root->right);
        q.push(root->data); // storing in descending order
        dfs(root->left);
    }
   void solver(Node* root){
        if(root==NULL)
            return;
        int val=q.front();
        q.pop();
        root->data=val; // putting the values according to defintion of the problem
        solver(root->right);
        solver(root->left);
    }
  
    void convertToMaxHeapUtil(Node* root)
    {
        dfs(root);
        solver(root);
    } 
