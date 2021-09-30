void shortestPath(int src , int N , vector<pair<int,int>>adj[]){
  int vis[N] = {0};
  stack<int> st;
  for(int i = 0 ; i < N ; i ++){
    if(!vis[i]){
      findTopoSort(i , vis , st , adj);
    }
  }
  int dist[N];
  for(int i = 0 ; i < N ; i++){
    dist[i] = 1e9;
  }
  dist[src] = 0;
  
  while(!st.empty()){
    
    int node = st.top();
    st.pop();
    
    if(dist[node] != INF){
      for(auto it : adj[node]){
        if(dist[node] + it.second < dist[it.first]){
          dist[it.first] = dist[node] + it.second ;
        }
      }
    }
  }
  for(int i  = 0 ; i < N ; i++){
    (dist[i] == 1e9)?cout<<"INF ": cout<<dist[i]<<" ";
  }
}
