class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int, int> m;
        int ans = 0;
        for(auto v : nums){
            ans += m[v]++;
        }
        
        return ans;
    }
};