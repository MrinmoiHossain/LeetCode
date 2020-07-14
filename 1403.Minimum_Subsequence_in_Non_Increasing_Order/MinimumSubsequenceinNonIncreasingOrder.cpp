class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
    
        int sum = 0;
        for(auto v : nums)
            sum += v;
        
        int currSum = 0;
        for(int i = nums.size() - 1; i >= 0; --i){
            currSum += nums[i];
            ans.push_back(nums[i]);
            
            if(sum - currSum < currSum)
                return ans;
        }
        
        return ans;
    }
};