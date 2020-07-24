class Solution {
public:
    bool help(int a, vector<int>& v) {
        for(auto x : v){
            if(x == a)
                return true;
        }    
        return false;
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> curr;
        int start = 0, last = graph.size() - 1;
        curr.push_back(start);
        
        queue<vector<int>> q;
        q.push(curr);
        
        while(!q.empty()){
            curr = q.front();
            q.pop();
            
            int last_val = curr.back();
            if(last_val == last)
                ans.push_back(curr);
            for(auto v : graph[last_val]){
                if(!help(v, curr)){
                    vector<int> temp(curr);
                    temp.push_back(v);
                    q.push(temp);
                }
            }
        }
        
        return ans;
    }
};