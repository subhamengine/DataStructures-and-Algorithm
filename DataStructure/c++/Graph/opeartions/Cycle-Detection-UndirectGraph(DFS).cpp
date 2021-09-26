bool checkForCycle(int node ; int parent , vector<int>&vis ; vector<int>adj[]){
  vis[node] = 1;
  for(auto it : adj[node]){
    if(vis[it] == 0){
      if(checkForCycle(it , node , vis , adj)) return true;
    }
    else if(it != parent) return true;
  }
  return false;
}

bool iscycle(int v , vector<int>adj[]){
  vector<int> vis(v+1,0);
  for(int i = 1 ; i <= v ; i++){
    if(!vis[i]){
      if(checkForCycle(1 , -1 , vis , adj)) return true;
    }
  }
}
