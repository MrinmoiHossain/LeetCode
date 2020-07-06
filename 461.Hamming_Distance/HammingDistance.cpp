class Solution {
public:
    int hammingDistance(int x, int y) {
        int diff = x ^ y;
        bitset<32> ans(diff);
        
        return ans.count();
    }
};