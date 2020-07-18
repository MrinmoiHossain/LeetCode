class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int start = 0, mid = n, last = nums.size();
        vector<int> ans(nums.size());
        
        for(int i = 0; i < last; ++i){
            ans[i] = nums[start++];
            ans[++i] = nums[mid++];
        }
        
        return ans;
    }
};