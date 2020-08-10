class Solution {
public:
    int titleToNumber(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int ans = 0;
        for(char c : s)
            ans = 26 * ans + (c - 'A' + 1);
        
        return ans;
    }
};