#include <bits/stdc++.h>
using namespace std;
#define v 4
bool isdirected(int digraph[][v]){
  for(int i = 0 ; i < v ; i++){
    for(int j = 0 ; j < v ; j++){
      if(digraph[i][j] == 1 and !digraph[j][i]) return false;
    }
  }
  return true;;
}

int countTriangle(int graph[][v] , bool isdirect){
  int counter = 0;
  for(int i = 0 ; i < v ; i ++){
    for(int j = 0 ; j < v ; j++){
      for(int k = 0 ; k < v ; k++){
        if(graph[i][j] and graph[j][k] and graph[k][i]) counter ++;
      }
    }
  }  
  if(isdirect){
    counter = counter/3;
  }
  else counter = counter/6;
  return counter;
}
int main() 
{
    int graph[][v] = { {0, 1, 1, 0},
                       {1, 0, 1, 1},
                       {1, 1, 0, 1},
                       {0, 1, 1, 0}
                     };
    int digraph[][v] = { {0, 0, 1, 0},
                        {1, 0, 0, 1},
                        {0, 1, 0, 0},
                        {0, 0, 1, 0}
                       };
    cout<<countTriangle(graph, isdirected(graph));

    
}
