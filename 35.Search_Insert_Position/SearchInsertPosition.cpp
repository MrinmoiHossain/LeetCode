class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s = 0, f = nums.size() - 1;
        
        while(s <= f){
            int mid = (s + f) / 2;

            if(nums[mid] == target)
                return mid;
            else if(nums[mid] > target)
                f--;
            else
                s++;
        }
        return s;
    }
};