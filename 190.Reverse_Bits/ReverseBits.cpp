class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0, power = 31;
        while(n != 0){
            ans += (n & 1) << power;
            n = n >> 1;
            --power;
        }
        
        return ans;
    }
};