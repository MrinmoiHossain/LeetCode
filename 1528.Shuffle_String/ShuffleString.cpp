class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        string t = s;
        
        for(int i = 0; i < n; ++i){
            t[indices[i]] = s[i];
        }
        
        return t;
    }
};