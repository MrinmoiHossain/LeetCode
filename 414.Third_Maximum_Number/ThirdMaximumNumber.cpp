class Solution {
public:
    int thirdMax(vector<int>& nums) {
        vector<long> v(3, LONG_MIN);
        int n = nums.size();
        
        for(int i = 0; i < n; ++i){
            if(v[0] < nums[i]){
                v[2] = v[1];
                v[1] = v[0];
                v[0] = nums[i];
            }
            else if(v[1] < nums[i] && nums[i] != v[0]){
                v[2] = v[1];
                v[1] = nums[i];
            }
            else if(v[2] < nums[i] && nums[i] != v[0] && nums[i] != v[1]){
                v[2] = nums[i];
            }
        }
        
        
        if(v[2] == LONG_MIN)
            return v[0];
        return v[2];
    }
};