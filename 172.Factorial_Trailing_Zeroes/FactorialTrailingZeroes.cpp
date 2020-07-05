class Solution {
public:
    int trailingZeroes(int n) {
        int con = 0;
        
        for(long long i = 5; i <= n; i *= 5)
            con += n / i;
        
        return con;
    }
};