class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void dfs(int node , vector<int>adj[] , vector<int>&vis , int c , int d){
        vis[node] = 1;
        for(auto it:adj[node]){
            if((c == node and it == d) or(node == d and it == c)) continue;
            if(!vis[it]) dfs(it,adj,vis,c,d);
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<int>vis(V,0);
        dfs(c,adj,vis,c,d);
        if(!vis[d]) return 1;
        return 0;
    }
};
//algo->We will send the node(c) as the starting node into the dfs.
//we will not consider the edge betwwen c and d, but still if d gets visited after the dfs.
//c and d is not the bridge.
