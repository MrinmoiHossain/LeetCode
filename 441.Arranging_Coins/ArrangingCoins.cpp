class Solution {
public:
    int arrangeCoins(int n) {
        double k = sqrt(2.0 * n + 1.0 / 4.0) - 0.5;
        
        return ((int)k);
    }
};