class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        for(int i = 1; i < nums.size(); ++i){
            nums[i] += nums[i - 1];
        }
        
        return nums;
    }
};