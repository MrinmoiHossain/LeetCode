class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = 0;
        
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == val){
                continue;
            }
            else{
                nums[n++] = nums[i];
            }
        }
        
        return n;
    }
};