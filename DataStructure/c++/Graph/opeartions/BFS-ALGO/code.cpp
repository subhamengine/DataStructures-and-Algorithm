vector<int>bfsGraph(int v , vector<int>adj[]){
  vector<int>bfs;
  vector<int>visited(v+1,0);
  
  for(int i = 1 ; i <= v ; i++){
    if(visited[i] == 0){
      queue<int>q;
      q.push(i);
      visited[i] = 1;
      
      while(!q.empty()){
        
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        
        for(auto it: adj[node]){
          if(!visited[it]){
            q.push(it);
            visited[it] = 1;
          }
        }
      }
    }
  }
  return bfs;
}
