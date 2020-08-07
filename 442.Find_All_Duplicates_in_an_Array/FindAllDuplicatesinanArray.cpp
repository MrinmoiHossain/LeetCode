class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> ans;
        for(auto v : nums){
            int j = abs(v) - 1;
            
            if(nums[j] > 0)
                nums[j] *= -1;
            else
                ans.push_back(j + 1);
        }
        
        return ans;
    }
};