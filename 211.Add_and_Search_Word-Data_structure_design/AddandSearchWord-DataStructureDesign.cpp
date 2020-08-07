class WordDictionary {
public:
    /** Initialize your data structure here. */
    map<int, vector<string>> m;
    WordDictionary() {
        
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        int n = word.length();
        m[n].push_back(word);
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool check(string a, string b) {
        for(int i = 0; i < a.length(); ++i){
            if(a[i] == '.')
                continue;
            if(a[i] != b[i])
                return false;
        }
        
        return true;
    }
    
    bool search(string word) {
        int n = word.length();
        for(string s : m[n]){
            if(check(word, s))
                return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */