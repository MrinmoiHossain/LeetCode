class Solution {
public:
    string reverseWords(string s) {
        istringstream ss(s);
        string temp = "";
        
        ss >> s;
        while(ss >> temp){
            s = temp + " " + s;
        }
        if(s[0] == ' ')
            s = "";
        
        return s;
    }
};