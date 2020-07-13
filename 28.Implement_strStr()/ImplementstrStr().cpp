class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length() == 0)
            return 0;
        
        int h = haystack.length(), n = needle.length();
        for(int i = 0; i <= h - n; ++i){
            int j = 0;
            for(; j < n; ++j){
                if(needle[j] != haystack[i + j])
                    break;
            }
            if(j == n)
                return i;
        }
        
        return -1;
    }
};