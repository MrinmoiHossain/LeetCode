class Solution {
public:
    vector<int> ans;
    vector<vector<int>> adj;
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        ans.resize(n);
        adj.resize(n, vector<int>{});
        
        for(auto v : edges){
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        
        dfs(0, -1, labels);
        
        return ans;
    }
    
    vector<int> dfs(int curr_node, int par_node, string &labels) {
        vector<int> v(26, 0);
        v[labels[curr_node] - 'a']++;
        
        for(int it : adj[curr_node]){
            if(it == par_node)
                continue;
            
            vector<int> f = dfs(it, curr_node, labels);
            for(int i = 0; i < 26; ++i)
                v[i] += f[i];
        }
        
        ans[curr_node] = v[labels[curr_node] - 'a'];
        
        return v;
    }
};