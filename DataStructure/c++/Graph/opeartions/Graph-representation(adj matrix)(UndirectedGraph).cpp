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

//commonly used for lower value of n
