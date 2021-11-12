vector<unordered_set<int>>make_graph(int numTasks , vector<pair<int,int>>&pre){
  vector<unordered_set<int>>graph(numTasks);
  for(auto p:pre){
    graph[p.second].insert(pre.first);
    return graph;
  }
}
bool dfs_cycle(vector<unordered_set<int>>&graph , int node , vector<bool>&onpath , vector<bool>&visited){
  if(visited[node] == true) return false;
  onpath[node] = visited[node] = true;
  for(int neigh : graph[node]){
    if(onpath[neigh] or dfs_cycle(graph , neigh , onpath , visited)) return true;
  }
  return onpath[node] = false;
}
bool canFinish(int numTasks , vector<pair<int,int>>&pre){
  vector<unordered_set<int>>graph = make_graph(numTasks , pre);
  vector<bool> onpath(numTasks, false), visited(numTasks, false);
  for(int i = 0 ; i < numTasks ; i++){
    if(!visited[i]  and dfs_cycle(graph , i , onpath , visited)) return false;
  }
  return true;
}
