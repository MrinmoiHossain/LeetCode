class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int diff_num = 0;
        for(auto v : nums){
            diff_num ^= v;
        }
        
        int pos = 0;
        while((diff_num & (1 << pos)) == 0)
            pos++;
        
        int first = 0;
        for(auto v : nums){
            if(v & (1 << pos)){
                first ^= v;
            }
        }
        
        int second = diff_num ^ first;
        
        return {first, second};
    }
};