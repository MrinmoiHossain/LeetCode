class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int j = 0;
        for(int i = 0; i < n; ++i){
            if(nums[i] == 0){
                continue;
            }
            else{
                nums[j++] = nums[i];
            }
        }
        
        while(j < n){
            nums[j++] = 0;
        }
    }
};