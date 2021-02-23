class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> ss;
        
        for(int i = 0; i < s.length(); ++i){
            if(s[i] == '(')
                ss.push(i);
            else if(s[i] == ')'){
                if(!ss.empty())
                    ss.pop();
                else{
                    s.erase(i, 1);
                    i--;
                }
            }
        }
        
        while(!ss.empty()){
            s.erase(ss.top(), 1);
            ss.pop();
        }
        
        return s;
    }
};