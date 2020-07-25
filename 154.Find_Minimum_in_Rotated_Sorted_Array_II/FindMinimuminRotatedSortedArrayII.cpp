class Solution {
public:
    int findMin(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int mn = INT_MAX;
        for(auto v : nums)
            mn = min(mn, v);
        
        return mn;
    }
};