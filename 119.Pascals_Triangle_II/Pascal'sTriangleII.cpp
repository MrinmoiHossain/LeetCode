class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1, 0);
        ans[0] = 1;
        
        for(int i = 1; i <= rowIndex; ++i)
            for(int j = rowIndex; j >= 1; --j)
                ans[j] += ans[j - 1];
        
        return ans;
    }
};