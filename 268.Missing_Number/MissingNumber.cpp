class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int sum = 0;
        for(int a : nums)
            sum += a;
        
        return (((n * (n + 1)) / 2) - sum);
    }
};