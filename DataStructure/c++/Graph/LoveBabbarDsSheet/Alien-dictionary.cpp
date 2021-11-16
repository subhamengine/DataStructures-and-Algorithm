class Solution{
    public:
    void dfs(int src , vector<vector<int>>&g , vector<int>&vis , string &ans){
        vis[src] = 1;
        for(auto x : g[src]){
            if(!vis[x]){
                dfs(x , g , vis , ans);
            }
        }
        char ch = src + 'a';
        ans = ch + ans;
    }
    string findOrder(string dict[], int n, int k) {
        vector<vector<int>>g(k);
        for(int i = 0 ; i < n-1 ; i++){
            string w1 = dict[i];
            string w2 = dict[i+1];
            for(int j = 0 ; j < min(w1.length(),w2.length()) ; j++){
                if(w1[j] != w2[j]){
                    g[w1[j] - 'a'].push_back(w2[j]-'a');
                    break;
                }
            }
        }
        string ans="";
        vector<int>vis(k,0);
        for(int i = 0 ; i < k ; i++){
            if(!vis[i]) dfs(i , g , vis , ans);
        }
        return ans;
    }
};
