class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string, string> m;
        for(auto v : paths){
            m[v[0]] = v[1];
        }
        
        for(auto v : paths){
            if(m.find(v[1]) == m.end())
                return v[1];
        }
        
        return "";
    }
};