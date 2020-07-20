class Solution {
public:
    int maxPower(string s) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        int ans = 1, count = 1;
        
        for(int i = 1; i < s.length(); ++i){
            ans = max(ans, count = 1 + count * (s[i] == s[i - 1]));
        }
        
        return max(ans, count);
    }
};