#include <bits/stdc++.h>
using namespace std;

void dfs(int s , vector<int>adj[] , vector<int>&vis){
    stack<int>st;
    st.push(s);
    while (!st.empty())
    {
        int node = st.top();
        st.pop();
        if (!vis[node])
        {
            cout<<node<<" ";
            vis[node] = 1;
        }
        for (auto it:adj[node]){
          if (!vis[it]){
            st.push(it);
          }
        }
    }
}

int main() 
{
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i = 0 ; i < m ; i++){
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    vector<int>vis(n,0);
    vector<int>ans(n);
    for(int i = 1 ; i <= n ; i++ ){
      dfs(i,adj,vis);
    }

}
