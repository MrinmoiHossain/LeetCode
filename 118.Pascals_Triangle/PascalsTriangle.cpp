class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i = 0; i < numRows; ++i){
            vector<int> v(i + 1, 0);
            v[0] = 1;
            
            for(int j = 1; j <= i; ++j){
                for(int k = j; k >= 1; --k){
                    v[k] += v[k - 1];
                }
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};