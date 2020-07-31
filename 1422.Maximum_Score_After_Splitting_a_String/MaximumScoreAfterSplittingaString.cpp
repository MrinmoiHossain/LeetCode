class Solution {
public:
    int maxScore(string s) {
        int left = (s[0] == '0'? 1 : 0);
        int right = 0;
        int n = s.length();
        
        for(int i = 1; i < n; ++i)
            if(s[i] == '1')
                right++;
        
        int ans = left + right;
        for(int i = 1; i < n - 1; ++i){
            if(s[i] == '1')
                right--;
            else
                left++;
            ans = max(ans, left + right);
        }
        
        return ans;
    }
};