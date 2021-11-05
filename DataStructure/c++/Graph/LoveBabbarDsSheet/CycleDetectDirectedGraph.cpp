class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool checkcycle(int node , vector<int>adj[] , int vis[] , int dfsvis[]){
        vis[node] = 1;
        dfsvis[node] = 1;
        for(auto it:adj[node]){
            if(!vis[it]){
                if(checkcycle(it , adj , vis , dfsvis)) return true;
            }
            else if(dfsvis[it]){
                return true;
            }
        }
        dfsvis[node] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        int vis[V]={0};
        int dfsvis[V] = {0};
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                if(checkcycle(i , adj , vis , dfsvis)) return true;
            }
        }
        return false;
    }
};
