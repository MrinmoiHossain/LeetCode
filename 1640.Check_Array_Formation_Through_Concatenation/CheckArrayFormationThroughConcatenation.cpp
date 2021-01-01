class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        map<int, vector<int>> m;
        
        for(auto v : pieces)
            m[v[0]] = v;
        
        vector<int> ans;
        for(int a : arr){
            if(m.find(a) != m.end())
                ans.insert(ans.end(), m[a].begin(), m[a].end());
        }
        
        return arr == ans;
    }
};