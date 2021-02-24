class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> s;
        s.push(0);
        
        for(int i = 0; i < S.length(); ++i){
            if(S[i] == '(')
                s.push(0);
            else{
                int a = s.top();
                s.pop();
                int b = s.top();
                s.pop();
                
                s.push(b + max(1, 2 * a));
            }
        }
        
        return s.top();
    }
};