class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int>ans;
        if(!root) return ans;
        queue<pair<Node* , int>>q;
        
        q.push({root , 0});
        map<int , int>m;
        
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int line = it.second;
            
            if(m.find(line) == m.end()) m[line] = node->data;
            
            if(node->left){
                q.push({node->left , line -1});
            }
            if(node->right){
                q.push({node->right , line+1});
            }
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }

};
