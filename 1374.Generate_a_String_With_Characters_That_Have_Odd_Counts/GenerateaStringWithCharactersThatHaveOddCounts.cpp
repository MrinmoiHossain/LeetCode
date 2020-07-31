class Solution {
public:
    string generateTheString(int n) {
        string s = "";
        
        if(n % 2 == 0){
            s += "a";
            n -= 1;
        }
        
        for(int i = 0; i < n; ++i)
            s += "b";
        
        return s;
    }
};