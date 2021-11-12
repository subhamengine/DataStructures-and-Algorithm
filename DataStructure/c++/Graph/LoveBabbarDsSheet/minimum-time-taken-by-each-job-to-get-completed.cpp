vector<int>minTime(int N , int E , vector<int>adj[]){
  vector<int>vis(N+1 , 0);
  vector<int>indegree(N+1 , 0);
  
  for(int i = 1 ; i <= N ; i++){
    for(auto it : adj[i]){
      indegree[it]++ ;
    }
  }
  vector<int>ans(N+1 , 0);
  queue<int>q;
  for(int i = 1 ; i <= N ; i++){
    if(indegree[i] == 0){
      q.push(i);
      ans[i] = 1;
    }
  }
  while(!q.empty()){
    int val = q.front();
    q.pop();
    for(auto x:adj[val]){
      indegree[x]--;
      if(indegree[x] == 0){
        ans[x] = ans[val] + 1;
        q.push(x);
      }
    }
  }
  for(int i = 1 ; i <= N ; i++) cout<<ans[i]<<" ";
}
