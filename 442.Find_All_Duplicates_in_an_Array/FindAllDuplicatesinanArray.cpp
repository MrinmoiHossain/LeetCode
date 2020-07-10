class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i){
            int j = abs(nums[i]) - 1;
            
            if(nums[j] > 0)
                nums[j] *= -1;
            else
                ans.push_back(j + 1);
        }
        
        return ans;
    }
};