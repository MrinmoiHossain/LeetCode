class Solution {
public:
    string reverseOnlyLetters(string S) {
        stack<char> s;
        for(char c : S){
            if(isalpha(c))
                s.push(c);
        }
        
        string ans = "";
        for(char c : S){
            if(isalpha(c)){
                ans += s.top();
                s.pop();
            }
            else{
                ans += c;
            }
        }
        
        return ans;
    }
};