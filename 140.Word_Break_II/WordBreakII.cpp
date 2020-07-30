class Solution {
public:
    vector<string> dfs(string s, set<string>& st, int id, map<int, vector<string>>& m) {
        if(m.count(id))
            return m[id];
        
        vector<string> ans;
        for(int i = id; i < s.length(); ++i){
            string curr = s.substr(id, i - id + 1);
            
            if(st.count(curr)){      
                if(i == s.length() - 1)
                    ans.push_back(curr);
                
                vector<string> temp = dfs(s, st, i + 1, m);
                for(string a : temp)
                    ans.push_back(curr + " " + a);
            }
        }
        m[id] = ans;
        return m[id];
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        set<string> st(wordDict.begin(), wordDict.end());
        map<int, vector<string>> m;
        return dfs(s, st, 0, m);
    }
};