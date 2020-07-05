class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int con = 0, max_one = 0, n = nums.size();
        for(int i = 0; i < n; ++i){
            if(nums[i] == 1){
                con++;
            }  
            else{
                max_one = max(max_one, con);
                con = 0;
            }
        }
        
        return max(con, max_one);
    }
};