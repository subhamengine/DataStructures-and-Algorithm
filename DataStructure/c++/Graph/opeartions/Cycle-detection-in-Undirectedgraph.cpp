bool checkforcycle(int s , int v ; vector<int>adj[] , vector<int>&vis){
  
  //create a queue for bfs
  queue<pair<int , int>>q;
  
  vis[s] = true;
  q.push({s,-1});
  
  while(!q.empty()){
    int node = q.front().first;
    int par = q.front().second;
    q.pop();
    
    for(auto it : adj[node]){
      if(!vis[it]){
        vis[it] = true;
        q.push({it,node});
      }
      else (par != it){
        return true;
      }
    }
  }
  return false;
}

bool iscycle(int v , vector<int>adj[]){
  vector<int>vis(v+1 , 0);
  
  for(int i = 1 ; i <= v ; i++){
    if(!vis[i]){
      if(checkforcycle(i , v , adj , vis)) return true; 
    }
  }
  return false;
}
