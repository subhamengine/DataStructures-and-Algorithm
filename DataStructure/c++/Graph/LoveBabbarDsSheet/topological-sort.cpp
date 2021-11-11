class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	stack<int>st;
	void dfs(int node , vector<bool>&vis , vector<int> adj[] ){
	    vis[node] = true;
	    for(auto it:adj[node]){
	        if(vis[it] == false){
	            dfs(it , vis , adj);
	        }
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    
	    vector<int>ans;
	    vector<bool>vis(V , false);
	    for(int i = 0 ; i < V ; i ++){
	        if(!vis[i]){
	            dfs(i , vis , adj);
	        }
	    }
	    while(!st.empty()){
	        ans.push_back(st.top());
	        st.pop();
	    }
	    return ans;
	}
};
