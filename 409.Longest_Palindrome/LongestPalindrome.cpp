class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(128, 0);
        for(char c : s)
            v[c]++;
        
        int ans = 0;
        for(int a : v){
            ans += a / 2 * 2;
            if(ans % 2 == 0 && a % 2 == 1)
                ans++;
        }
        
        return ans;
    }
};