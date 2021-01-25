class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int count = k;
        for(auto num : nums){
            if(num == 1){
                if(count < k)
                    return false;
                count = 0;
            }
            else
                count++;
        }
        
        return true;
    }
};