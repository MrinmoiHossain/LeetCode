class Solution {
public:
    static bool cmp(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }
    
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        sort(begin(intervals), end(intervals), cmp);
        
        int ans = 0, temp = INT_MIN;
        for(auto v : intervals){
            if(v[0] >= temp)
                temp = v[1];
            else
                ans++;
        }
        
        return ans;
    }
};