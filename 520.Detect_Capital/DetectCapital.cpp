class Solution {
public:
    bool detectCapitalUse(string word) {
        char f = word[0];
        
        int n = word.length(), lower = 0, upper = 0;
        for(int i = 1; i < word.length(); ++i){
            if(word[i] >= 'a' && word[i] <= 'z')
                lower++;
            else
                upper++;
        }
        
        if(f >= 'a' && f <= 'z' && lower == n - 1)
            return true;
        else if(f >= 'A' && f <= 'Z' && upper == n - 1)
            return true;
        else if(f >= 'A' && f <= 'Z' && lower == n - 1)
            return true;
        return false;
    }
};