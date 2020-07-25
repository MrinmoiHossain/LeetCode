class Solution {
public:
    int findMin(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        if(nums.size() == 1)
            return nums[0];
        
        int low = 0, high = nums.size() - 1;
        if(nums[0] < nums[high])
            return nums[0];
        
        while(low < high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] > nums[mid + 1])
                return nums[mid + 1];
            if(nums[mid] < nums[mid - 1])
                return nums[mid];
            
            if(nums[low] < nums[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
        
        return nums[low];
    }
};