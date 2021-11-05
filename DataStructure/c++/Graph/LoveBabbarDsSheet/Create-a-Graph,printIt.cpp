#include <bits/stdc++.h>
using namespace std;

//For undirected graph
// int main() 
// {
//     int n,m;
//     cin>>n>>m;
//     vector<int>adj[n+1];
//     for(int i = 0 ; i < m ; i++){
//       int u , v;
//       cin>>u>>v;
//       adj[u].push_back(v);
//       adj[v].push_back(u);
//     }
//     int node = 0;
//     for(auto it:adj){
//       if(node!=0)cout<<"For Node "<<node<<" -> ";
//       for(auto q:it){
//         cout<<q<<" ";
//       }
//       cout<<endl;
//       node++;
//     }
//     return 0;
// }

//For directed graph
// int main(){
//   int n,m;
//   cin>>n>>m;
//   vector<int>adj[n+1];
//   for(int i = 0 ; i < m ; i++){
//     int u , v;
//     cin>>u>>v;
//     adj[u].push_back(v);
//   }
//   int node = 0;
//     for(auto it:adj){
//       if(node!=0)cout<<"For Node "<<node<<" -> ";
//       for(auto q:it){
//         cout<<q<<" ";
//       }
//       cout<<endl;
//       node++;
//     }
//     return 0;
// }

//for directed weighted graph

int main(){
  int n,m;
  cin>>n>>m;
  vector<pair<int,int>>adj[n+1];
  for(int i = 0 ; i < m ; i++){
    int u,v,wt;
    cin>>u>>v>>wt;
    adj[u].push_back({v,wt});    
  }
  int node = 0;
  for(auto it:adj){
    if(node!=0) cout<<"For Node "<<node<<" --> ";
    for(auto q:it){
      cout<<"{"<<q.first<<","<<q.second<<"}"<<" ";
    }
    cout<<endl;
    node++;
  }
}
