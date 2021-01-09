class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a, b;
        for(string temp : word1)
            a += temp;
        
        for(string temp : word2)
            b += temp;
        
        return a == b;
    }
};