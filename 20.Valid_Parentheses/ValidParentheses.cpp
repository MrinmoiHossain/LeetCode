class Solution {
public:
    bool isValid(string s) {
        int n = s.length();
        
        stack<char> sc;
        for(int i = 0; i < n; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                sc.push(s[i]);
            else{
                if(sc.empty())
                    return false;
                char temp = sc.top();
                sc.pop();
                if((temp == '(' && s[i] != ')') || (temp == '{' && s[i] != '}') || (temp == '[' && s[i] != ']'))
                    return false;
            }
        }
        return sc.empty();
    }
};