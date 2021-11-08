class Solution {
public:
    void dfs(Node* node , vector<Node*>&vis , Node* copy){
        vis[copy->val] = copy;
        for(auto x : node->neighbors){
           if(vis[x->val] == NULL){
                Node* newnode = new Node(x->val);
                (copy->neighbors).push_back(newnode);
                dfs(x , vis , newnode);
           }
            else{
                (copy->neighbors).push_back(vis[x->val]);
            }
        }
    }
    Node* cloneGraph(Node* node) {
        if(node == NULL) return NULL;
        vector<Node*>vis(1000,NULL);
        Node* copy = new Node(node->val);
        dfs(node,vis,copy);
        return copy;
    }
};
