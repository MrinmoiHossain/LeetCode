class Solution {
public:
    int singleNumber(vector<int>& nums){
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        
        int a = nums[0], n = nums.size();
        for(int i = 1; i < n; ++i){
            a ^= nums[i];
        }
        return a;
    }
};