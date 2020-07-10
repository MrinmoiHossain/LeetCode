class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i = 0; i < nums.size(); ++i){
            int j = abs(nums[i]) - 1;
            
            if(nums[j] > 0)
                nums[j] *= -1;
        }
        
        vector<int> ans;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] > 0)
                ans.push_back(i + 1);
        }
        
        return ans;
    }
};