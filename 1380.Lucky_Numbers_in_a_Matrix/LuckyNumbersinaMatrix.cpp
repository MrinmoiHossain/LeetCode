class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        vector<int> ans;
        int row = matrix.size();
        for(int i = 0; i < row; ++i){
            int mn = *min_element(matrix[i].begin(), matrix[i].end());
            int pos = find(matrix[i].begin(), matrix[i].end(), mn) - matrix[i].begin();
            
            bool flag = true;
            for(int j = 0; j < row; ++j){
                if(matrix[j][pos] > mn){
                    flag = false;
                    break;
                }
            }
            if(flag)
                ans.push_back(mn);
        }
        
        return ans;
    }
};