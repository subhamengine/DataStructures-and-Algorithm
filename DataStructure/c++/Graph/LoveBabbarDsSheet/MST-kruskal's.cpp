class DSU
{
private:
    vector<int> parent, size;
public:
    DSU(int n)
    {
        for(int i=0; i<=n; i++) {
            parent.push_back(i);
            size.push_back(1);
        }
    }
    int findPar(int node)
    {
        if(parent[node]==node)
            return node;
        return parent[node] = findPar(parent[node]);
    }
    void unionBysize(int u, int v)
    {
        int pu = parent[u];
        int pv = parent[v];
        if(pu==pv)
            return;
        if(size[pu]<size[pv]) {
            parent[pu] = pv;
            size[pv]+=size[pu];
        }
        else {
            parent[pv] = pu;
            size[pu]+=size[pv];
        }
    }
};
class Node
{
public:
    int u, v, wt;
    Node(int first, int second, int weight) {
        u = first;
        v = second;
        wt = weight;
    }
};

bool comp(Node a, Node b) {
    return a.wt<b.wt;
}
class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        vector<Node> edges;
        for(int i=0; i<V; i++) {
            for(auto& it: adj[i]) {
                edges.push_back(Node(i, it[0], it[1]));
            }
        }
        sort(edges.begin(), edges.end(), comp);
        int ans = 0;
        DSU dsu(V);
        for(auto& it: edges) {
            if(dsu.findPar(it.u)!=dsu.findPar(it.v)) {
                ans+=it.wt;
                dsu.unionBysize(it.u, it.v);
            }
        }
        return ans;
    }
};
