#include <bits/stdc++.h>
using namespace std;
vector<int>order;
void topo(int node , vector<vector<pair<int,int>>>g , vector<int>&vis){
  vis[node] = 1;
  for(auto it:g[node]){
    if(!vis[it.first]){
      topo(it.first,g,vis);
    }
  }
  order.push_back(node);
}
int main() 
{
    int v,e;
    cin>>v>>e;
    int src;
    cin>>src;
    vector<vector<pair<int,int>>>g(v);
    for(int i = 0 ; i < e ; i++){
      int x,y,w;
      cin>>x>>y>>w;
      g[x].push_back({y,w});
    }
    vector<int>vis(v,0);
    for(int i = 0 ; i < v ; i++){
      if(!vis[i]){
        topo(i,g,vis);
      }
    }
    int ninf = INT_MIN;
    vector<int>dist(v,ninf);
    dist[src] = 0;
    for(int i = v-1 ; i >= 0 ; i--){
      if(dist[order[i]] != ninf){
        for(auto it:g[order[i]]){
          int u = dist[order[i]];
          int v = dist[it.first];
          int wt = it.second;
          if(u + wt > v) dist[it.first] = u + wt;
        }
      }
    }
    for(int i = 0 ; i < v ; i++){
      if(dist[i] != ninf and i!=src){
        cout<<src<<" -->"<<i<<" = "<<dist[i]<<",";
      }
    }
    return 0;
}
