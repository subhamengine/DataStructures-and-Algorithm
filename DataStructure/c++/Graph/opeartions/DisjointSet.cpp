#include <bits/stdc++.h>
using namespace std;

int parent[100000];
int rank[100000];

void makeSet(int n) {
  for(int i = 1 ; i <= n ; i++){
    parent[i] = i ;
    rank[i] = 0;
  }
}

int findPar(int node) {
  if(node == parent[node]){
    return node;
  }
  return findPar(parent[node]);
}

void union(int u , int v) {
  u = findPar(u);
  v = findPar(v);
  
  if(rank[u] < rank[v]) {
    parent[u] = v;
  }else if(rank[v] < rank[u]) {
    parent[v] = u;
  }
  else{
    parent[v] = u;
    rank[u]++; 
  }
}
int main() 
{
   
  int m ;
  cin>>m;
  makeSet(m);
  while(m--) {
    int u , v;
    union(u , v);
  }
  //if 2 or 3 belong to the same component or not
if(findPar(2) != findPar(3)){
  cout<<"They belong to different components"<<endl;
}
}
