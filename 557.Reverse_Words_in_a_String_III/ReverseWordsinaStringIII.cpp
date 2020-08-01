class Solution {
public:
    string reverseWords(string s) {
        string ans = "", temp = "";
        
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == ' '){
                reverse(begin(temp), end(temp));
                ans += temp + " ";
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        reverse(begin(temp), end(temp));
        ans += temp;
        
        return ans;
    }
};