class CombinationIterator {
private:
    vector<string> ans;
    int index;
    
    void combination(string characters, int len, int pos, string curr) {
        if(curr.size() == len){
            ans.push_back(curr);
            return;
        }
        
        for(int i = pos; i < characters.length(); ++i){
            curr += characters[i];
            combination(characters, len, i + 1, curr);
            curr.pop_back();
        }
    }
    
public:
    CombinationIterator(string characters, int combinationLength) {
        string curr;
        combination(characters, combinationLength, 0, curr);
        index = 0;
    }
    
    string next() {
        if(hasNext())
            return ans[index++];
        return "";
    }
    
    bool hasNext() {
        return index < ans.size();
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */