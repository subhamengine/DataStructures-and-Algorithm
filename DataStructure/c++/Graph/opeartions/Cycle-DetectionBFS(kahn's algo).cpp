bool IsCyclic(vector<int>adj[] , int n){
  queue<int>q;
  vector<int>indegree(n,0);
  for(int i = 0 ; i < n ; i ++){
   for(auto it : adj[i]){
     indegree(it)++;
   }
  }
  for(int i = 0 ; i < n ; i++){
    if(indegree[i] == 0){
      q.push(i);
    }
  }
  int c = 0;
  while(!q.empty()){
    int node = q.front();
    q.pop();
    c++;
    for(auto it : adj[node]){
      indegree[it]--;
      if(indegree[it] == 0) q.push(it);
    }
  }
  if(c == n) return true;
  else return false;
}
