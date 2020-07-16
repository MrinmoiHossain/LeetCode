class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";
        for(auto c : s){
            if(isalnum(c))
                temp += (isalpha(c)? tolower(c) : c);
        }
        
        int n = temp.length();
        for(int i = 0; i < n; ++i){
            if(temp[i] != temp[n - 1 - i])
                return false;
        }
        
        return true;
    }
};