class Solution {
public:
    vector<string> ans;
    void solve(string curr, string s, int i) {
        if(i == s.length()){
            ans.push_back(curr);
            return;
        }
        
        if(isdigit(s[i])){
            curr += s[i];
            solve(curr, s, i + 1);
        }
        else{
            string a = curr;
            a += toupper(s[i]);
            solve(a, s, i + 1);
            
            string b = curr;
            b += tolower(s[i]);
            solve(b, s, i + 1);
        }
    }
    vector<string> letterCasePermutation(string S) {
        ans.clear();
        solve("", S, 0);
        
        return ans;
    }
};