bol BipartiteBfs(int src , vector<int>adj[] , int colour[]){
  queue<int>q;
  q.push(src);
  colour[src] = 1;
  while(!q.empty()){
    int node = q.front();
    q.pop();
   
   for(auto it : adj[node]){
     if(colour[it] == -1){
       colour[it] = 1 - colour[node];
       q.push(it);
     }
     else if(colour[it] == colour[node]){
       return false;
     }
   } 
  }
  return true;
}


bool checkBipartite(vector<int>adj[] , int n){
  int colour[n];
  memset(colour , -1 , sizeof colour);
  for(int i = 0 ; i < n ; i++){
    if(colour[i] == -1){
      if(!BipartiteBfs(i , adj , colour)) return false;
    }
  }
  return true;
}
