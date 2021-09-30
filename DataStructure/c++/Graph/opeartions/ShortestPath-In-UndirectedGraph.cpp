void bfs(vector<int> adj[] , int n , int src){
  int dist[n];
  
  for(int i = 0 ; i < n ; i++) dist[i] = INT_MAX;
  
  queue<int> q;
  dist[src] = 0;
  q.push(src);
  
  while(q.empty() == false){
    int node = q.front();
    q.pop();
    
    for(auto it: adj[node]){
      if(dist[node] + 1 < dist[it]){
        dist[it] = dist[node] + 1;
        q.push(it)
      }
    }
  }
  for(int i = 0 ; i < n ; i++){
    cout<<dist[i]<<" ";
  }
}
