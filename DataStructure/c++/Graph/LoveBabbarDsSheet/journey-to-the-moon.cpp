#include <bits/stdc++.h>

using namespace std;

void dfs(int node , vector<vector<int>> astronaut , vector<int>&vis , int &count){
    vis[node] = 1;
    count++;
    for(auto it:astronaut[node]){
        if(!vis[it]){
            dfs(it,astronaut,vis,count);
        }
    }
}
int journeyToMoon(int n, vector<vector<int>> astronaut) {
    vector<int>sol(n);
    vector<int>vis(n,0);
    for(int i = 0 ; i < n ; i++){
        if(!vis[i]){
            int count = 0;
            dfs(i,astronaut,vis,count);
            sol.push_back(count);
        }
    }
    int val = (n*(n-1)/2);
    for(int i = 0 ; i < sol.size() ; i++){
        int x = (sol[i]*(sol[i]-1))/2;
        val = val - x;
    }
    return val;
}

int main()
{
    int v,e;
    cin>>v>>e;
    vector<vector<int>>astronaut(v);
    for(int i = 0 ; i < v ; i++){
        int x,y;
        cin>>x>>y;
        astronaut[x].push_back(y);
        astronaut[y].push_back(x);
    }
    int val = journeyToMoon(v,astronaut);
    cout<<val;
    return 0;
}
