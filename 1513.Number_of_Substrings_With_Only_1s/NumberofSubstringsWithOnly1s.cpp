class Solution {
public:
    int numSub(string s) {
        int ans = 0, con = 0, mod = 1e9+7;
        for(int i = 0; i < s.length(); ++i){
            con = (s[i] == '1')? con + 1 : 0;
            ans = (ans + con) % mod;
        }
        
        return ans;
    }
};