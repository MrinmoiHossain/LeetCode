class Solution {
public:
    string reverseOnlyLetters(string S) {
        string ans = "";
        int j = S.length() - 1;
        
        for(int i = 0; i < S.length(); ++i){
            if(isalpha(S[i])){
                while(!isalpha(S[j]))
                    j--;
                ans += S[j--];
            }
            else{
                ans += S[i];
            }
        }
        
        return ans;
    }
};