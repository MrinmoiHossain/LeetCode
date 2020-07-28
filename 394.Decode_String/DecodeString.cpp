class Solution {
public:
    string decodeString(string s) {
        stack<int> num;
        stack<string> alpha;
        
        int i = 0, n = s.length();
        string ans = "";
        while(i < n){
            if(isdigit(s[i])){
                int digit = 0;
                while(isdigit(s[i])){
                    digit = 10 * digit + (s[i++] - '0');
                }
                num.push(digit);
            }
            else if(s[i] == '['){
                alpha.push(ans);
                ans = "";
                i++;
            }
            else if(s[i] == ']'){
                string temp = alpha.top();
                alpha.pop();
                int curr_num = num.top();
                num.pop();
                
                for(int j = 0; j < curr_num; ++j)
                    temp += ans;
                
                ans = temp;
                i++;
            }
            else{
                ans += s[i++];
            }
        }
        
        return ans;
    }
};