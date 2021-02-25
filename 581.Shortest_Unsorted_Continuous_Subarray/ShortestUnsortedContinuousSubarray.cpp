class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> arr = nums;
        sort(begin(arr), end(arr));
        
        int start = nums.size(), end = 0, n = nums.size();
        for(int i = 0; i < n; ++i){
            if(arr[i] != nums[i]){
                start = min(start, i);
                end = max(end, i);
            }
        }
        
        return (end - start >= 0? end - start + 1 : 0);
    }
};