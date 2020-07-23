class Solution {
public:
    string hash(string s) {
        vector<int> v(26, 0);
        for(auto c : s){
            v[c - 'a']++;
        }
        
        string a = "";
        for(int i = 0; i < 26; ++i){
            a += string(v[i], i + 'a');
        }
        
        return a;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        for(auto v : strs){
            m[hash(v)].push_back(v);
        }
        
        vector<vector<string>> ans;
        for(auto v : m){
            ans.push_back(v.second);
        }
        
        return ans;
    }
};