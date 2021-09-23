1. For undirected map:-
a. using adj matrix:- O(N*N)
  
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n , m ;
  cin >> n >> m;
  
  //creating the adjacent matrix
  int adj[n+1][n+1];
  
  //taking edges as input
  for(int i = 0 ; i < m ; i++){
    int u , v;
    cin>>u>>v;
    adj[u][v] = 1;
    adj[v][u] = 1;
  }
  return 0;
}
b. Using adjancy list(vector) :- 0(N + 2*E)

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n , m ;
  cin >> n >> m;
  
  vector<int>adj[n+1];
  
  //taking edges as input
  for(int i = 0 ; i < m ; i++){
    int u , v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  return 0;
}
2. For Directed graph:-
  
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n , m ;
  cin >> n >> m;
  
  vector<int>adj[n+1];
  
  //taking edges as input
  for(int i = 0 ; i < m ; i++){
    int u , v;
    cin>>u>>v;
    adj[u].push_back(v);
  }
  return 0;
}
3. For weighted graphs:-

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n , m ;
  cin >> n >> m;
  
  vector<pair<int,int>>adj[n+1];
  
  //taking edges as input
  for(int i = 0 ; i < m ; i++){
    int u , v , w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w}); 
  }
  return 0;
}

