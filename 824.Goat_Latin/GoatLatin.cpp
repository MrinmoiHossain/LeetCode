class Solution {
public:
    string toGoatLatin(string S) {
        istringstream ss(S);
        string s, ans = "", last;
        set<char> vowels {'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
        
        while(ss >> s){
            last += "a";
            
            if(vowels.count(s[0]) <= 0)
                s = s.substr(1) + s[0];
            
            ans += s + "ma" + last + " ";
        }
        ans.pop_back();
        
        return ans;
    }
};