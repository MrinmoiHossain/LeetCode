class Solution {
public:
    string change(string a, string b) {
        string temp = "";
        int i = 0, j = 0;
        
        while(a[i] == b[j] && i < a.length() && j < b.length()){
            temp += a[i++];
            j++;
        }
        
        return temp;
    }
    
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        
        string prefix = strs[0];
        
        for(int i = 1; i < strs.size(); ++i){
            prefix = change(strs[i], prefix);
            if(prefix.length() == 0)
                return "";
        }
        
        return prefix;
    }
};