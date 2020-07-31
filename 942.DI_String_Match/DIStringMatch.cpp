class Solution {
public:
    vector<int> diStringMatch(string S) {
        int n = S.length();
        int i = 0, low = 0, high = n;
        vector<int> v(n + 1, 0);
        
        for(auto c : S){
            if(c == 'D')
                v[i++] = high--;
            else
                v[i++] = low++;
        }
        v[n] = low;
        
        return v;
    }
};