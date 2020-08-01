class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        sort(begin(g), end(g));
        sort(begin(s), end(s));
        
        int i = g.size() - 1, j = s.size() - 1;
        int count = 0;
        
        while(i >= 0 && j >= 0){
            if(s[j] >= g[i--]){
                count++;
                j--;
            }    
        }
        
        return count;
    }
};