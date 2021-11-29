#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

class Graph{
private:
    int V;
    list<pair<int,int>>*adj;
public:
    Graph(int V){
        this->V=V;
        adj=new list<pair<int,int>>[V];
    }
    void addEdge(int u, int v, int wt=0){
        adj[u].push_back({v,wt});
    }
    void Modify(){
        for(int i=0;i<V;i++){
            for(auto it: adj[i]){
                addEdge(it.first,i,1);
            }
        }
    }
    void shortestPath(int src, int dest){
        priority_queue< pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>> > pq;
        vector<int> dist(V,INF);
        dist[src]=0;
        pq.push({0,src});
        while(!pq.empty()){
            int u=pq.top().second;
            pq.pop();
            for(auto it: adj[u]){
                int v=it.first;
                int cost=it.second;
                if(dist[v]>dist[u]+cost){
                    dist[v]=dist[u]+cost;
                    pq.push({dist[v],v});
                }
            }
        }
         cout<<"Reverse: "<<dist[dest];
    }
};

int main() {
    Graph g(7);
    g.addEdge(0, 1);
    g.addEdge(2, 1); 
    g.addEdge(2, 3); 
    g.addEdge(5, 1);
    g.addEdge(4, 5);
    g.addEdge(6, 4);
    g.addEdge(6, 3);
    g.Modify();
    g.shortestPath(0,5);
    return 0;
}
