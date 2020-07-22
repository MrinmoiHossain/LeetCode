class Solution {
public:
    int singleNumber(vector<int>& nums) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int one = 0, two = 0;
        for(auto v : nums){
            one = (one ^ v) & ~two;
            two = (two ^ v) & ~one;
        }
        
        return one;
    }
};