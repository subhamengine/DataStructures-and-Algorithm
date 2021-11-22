class Solution
{
	public:
	// of strongly connected components in the graph.
	void toposort(int node , vector<int>&vis , stack<int>&st , vector<int>adj[]){
	    vis[node] = 1;
	    for(auto it : adj[node]){
	        if(!vis[it]){
	            toposort(it,vis,st,adj);
	        }
	    }
	    st.push(node);
	}
	void revdfs(int node , vector<int>transpose[] , vector<int>&vis ){
	    
	    vis[node] = 1;
	    for(auto it : transpose[node]){
	        if(!vis[it]){
	            revdfs(it,transpose,vis);
	        }
	    }
	    
	}
    int kosaraju(int V, vector<int> adj[])
    {
        vector<int>vis(V,0);
        stack<int>st;
        for(int i = 0 ; i < V ; i++){
            if(!vis[i]){
                toposort(i,vis,st,adj);
            }
        }
        vector<int>transpose[V];
        for(int i = 0 ; i < V ; i++){
            for(auto it:adj[i]){
                transpose[it].push_back(i);
            }
        }
        for(int i = 0 ; i < V ; i ++) vis[i] = 0;
        int ans = 0;
        while(!st.empty()){
            int x = st.top();
            st.pop();
            if(!vis[x]){
                revdfs(x , transpose , vis);
                ans++;
            }
            
        }
        return ans;
    }
};
//do toposort and store it in a stack.
//make another vector and store the transpose of the adj list in that.
//then take the top of the stack one by one and call for the dfs.
//and increase the pointer as many times when the dfs is been called.
