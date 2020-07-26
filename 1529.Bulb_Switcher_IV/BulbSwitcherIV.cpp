class Solution {
public:
    int minFlips(string target) {
        int curr = 0, ans = 0;
        for(auto c : target){
            int a = c - '0';
            if((a ^ curr) == 1){
                curr ^= 1;
                ans++;
            }
        }
        
        return ans;
    }
};