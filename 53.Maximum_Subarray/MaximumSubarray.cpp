class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int sum = 0, mx = nums[0], n = nums.size();
        for(int i = 0; i < n; ++i){
            sum = max(nums[i], nums[i] + sum);
            mx = max(mx, sum);
        }
        
        return mx;
    }
};