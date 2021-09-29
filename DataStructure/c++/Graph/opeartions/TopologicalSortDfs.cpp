void FindTopoSort(int node , vector<int> &vis , stack<int> &st , vector<int> adj[]){
  vis[node] = 1;
  
  for(auto it : adj[node]){
    if(!vis[it]){
      FindTopoSort(it , vis , st , adj);
    }
  }
  st.push(node);
}

vector<int> topoSort(int N , vector<int> adj[]){
  stack<int>st;
  vector<int> vis(N , 0);
  
  for(int i = 0 ; i < n ; i ++){
    if(vis[i] == 0){
      FindTopoSort(i , vis , st , adj);
    }
  }
  vector<int> topo;
  while(!st.empty()){
    topo.push_back(st.top());
    st.pop();
  }
  return topo;
}
