class Solution {
public:
    static bool cmp(string a, string b) {
        int i = 0, j = 0;
        
        while(a[i] != ' ')
            i++;
        
        while(b[j] != ' ')
            j++;
        
        i++, j++;
        string aa = a.substr(i, a.size());
        string bb = b.substr(j, a.size());
        
        if(aa != bb)
            return aa < bb;
        else
            return a < b;
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        vector<string> letter_log;
        vector<string> number_log;
        for(auto s : logs){
            if(s[s.length() - 1] >= '0' && s[s.length() - 1] <= '9')
                number_log.push_back(s);
            else
                letter_log.push_back(s);
        }
        
        sort(begin(letter_log), end(letter_log), cmp);
        
        for(auto s : number_log)
            letter_log.push_back(s);
        
        return letter_log;
    }
};