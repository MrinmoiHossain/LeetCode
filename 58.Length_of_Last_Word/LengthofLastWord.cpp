class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = 0, mx = 0;
        for(int i = 0; i < s.length(); ++i){
            
            l = (s[i] != ' ')? l + 1 : 0;
            mx = (l == 0)? mx : l;
        }
        
        return mx;
    }
};