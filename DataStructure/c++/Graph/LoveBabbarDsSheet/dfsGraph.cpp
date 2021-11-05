class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool>visited(V,false);
        vector<int>bfs;
        visited[0] = true;
        queue<int>node;
        node.push(0);
        while(!node.empty()){
            int cur = node.front();
            node.pop();
            bfs.push_back(cur);
            
            for(auto i:adj[cur]){
                
                if(!visited[i]){
                node.push(i);
                visited[i] = true;
                }
            }
        }
        return bfs;
    }
};
