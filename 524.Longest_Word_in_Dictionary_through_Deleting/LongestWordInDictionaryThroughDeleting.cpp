class Solution {
public:
    bool strCmp(string a, string b) {
        int j = 0;
        for(int i = 0; i < a.length(); ++i){
            if(a[i] == b[j])
                j++;
        }
        
        return j == b.length();
    }
    
    string findLongestWord(string s, vector<string>& d) {
        string ans = "";
        
        for(string a : d){
            if(strCmp(s, a)){
                if(a.length() > ans.length() || (a.length() == ans.length() && a < ans))
                    ans = a;
            }
        }
        
        return ans;
    }
};