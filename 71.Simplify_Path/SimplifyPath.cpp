class Solution {
public:
    string simplifyPath(string path) {
        vector<string> s;
        
        for(int i = 0; i < path.length(); ){
            if(path[i] != '/'){
                string temp = "";
                
                while(path[i] != '/' && i < path.length())
                    temp += path[i++];
                
                if(temp == ".."){
                    if(s.size())
                        s.pop_back();
                }
                else if(temp != ".")
                    s.push_back(temp);
            }
            else
                i++;
        }
        
        string ans = "";
        for(string a : s)
            ans += "/" + a;
        
        return !ans.length()? "/" : ans;
    }
};