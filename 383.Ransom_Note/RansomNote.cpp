class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26, 0);
        for(auto c : magazine)
            v[c - 'a']++;
        
        for(auto c : ransomNote){
            v[c - 'a']--;
            if(v[c - 'a'] < 0)
                return false;
        }
        
        return true;
    }
};