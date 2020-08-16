class Solution {
public:
    int minOperations(int n) {
        int mid = (n % 2)? (2 * (n / 2) + 1) : (2 * (n / 2));
        
        int ans = 0;
        for(int i = 0; i < n / 2; ++i){
            ans += (mid - 2 * i - 1);
        }
        
        return ans;
    }
};