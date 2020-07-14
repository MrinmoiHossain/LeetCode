class Solution {
public:
    static bool cmp(int a, int b) {
        bitset<32> ba(a);
        bitset<32> bb(b);
        
        if(ba.count() != bb.count())
            return ba.count() < bb.count();
        return a < b;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(begin(arr), end(arr), cmp);
        
        return arr;
    }
};