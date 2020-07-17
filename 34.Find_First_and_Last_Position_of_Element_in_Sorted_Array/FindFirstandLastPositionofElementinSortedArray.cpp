class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool left) {
        int low = 0, high = nums.size();
        
        while(low < high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] > target || (left && nums[mid] == target))
                high = mid;
            else
                low = mid + 1;
        }
        
        return low;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int left_index = binarySearch(nums, target, true);
        
        if(left_index == nums.size() || nums[left_index] != target)
            return {-1, -1};
        
        int right_index = binarySearch(nums, target, false);
        
        return {left_index, right_index - 1};
    }
};