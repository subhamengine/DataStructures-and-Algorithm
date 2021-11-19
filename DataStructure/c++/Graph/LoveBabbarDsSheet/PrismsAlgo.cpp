#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;
  int u,v,wt;
  vector<pair<int,int>>adj[n];
  for(int i = 0 ; i < m ; i++){
    cin>>u>>v>>wt;
    adj[u].push_back({v,wt});
    adj[v].push_back({u,wt});
  }
  int parent[n];
  bool mst[n];
  int key[n];
  for(int i = 0 ; i < n ; i++){
    mst[i] = false;
    key[i] = INT_MAX;
  }
  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
  key[0] = 0;
  parent[0] = -1;
  pq.push({0,0});
  for(int count  = 0 ; count < n-1 ; count++){
    int u = pq.top().second;
    pq.pop();
    mst[u] = true;
    for(auto it:adj[u]){
      int v = it.first;
      int weight = it.second;
      if(mst[v] == false and weight < key[v]){
        parent[v] = u;
        pq.push({key[v],v});
        key[v] = weight;
      }
    }
  }
  for(int i = 0 ; i < n ; i++){
    cout<<parent[i]<<" - "<<i<<endl;
  }
}
