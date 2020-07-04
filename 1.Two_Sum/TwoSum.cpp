class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for(int i = 0; i < nums.size(); ++i){
            int n = target - nums[i];
            if(m.count(n))
                return {m[n], i};
            m[nums[i]] = i;
        }
        
        return {-1, -1};
    }
};