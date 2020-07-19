class Solution {
public:
    int firstUniqChar(string s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        vector<int> v(26, 0);
        int n = s.length();
        
        for(auto c : s){
            v[c - 'a']++;
        }
        
        for(int i = 0; i < n; ++i){
            if(v[s[i] - 'a'] == 1)
                return i;
        }
        
        return -1;
    }
};