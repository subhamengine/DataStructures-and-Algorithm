bool bipartiteDfs(int node , vector<int>adj[] , int colour[]){
  
  if(colour[node] == -1) colour[node] = 1;
  
  for(auto it : adj[node]){
    if(colour[it] == -1){
      colour[it] = 1 - colour[node];
      
      if(!bipartiteDfs(it , adj , colour)){
        return false;
      }
      else if(colour[it] == colour[node]) return false;
    }
  }
  return true;
}

bool checkBipartite(vector<int>adj[] , int n){
  int colour[n];
  memset(colour , -1 , sizeof colour);
  for(int i = 0 ; i < n ; i++){
    if(colour[i] == -1){
      if(!bipartiteDfs(i , adj , colour)){
        return false;
      }
    }
  }
  return true;
}
