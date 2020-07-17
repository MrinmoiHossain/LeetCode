class Solution {
public:
    static bool cmp(pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    }
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        map<int, int> m;
        for(auto v : nums)
            m[v]++;
        
        vector<pair<int, int>> vp(m.begin(), m.end());
        sort(vp.begin(), vp.end(), cmp);
        
        vector<int> feq;
        for(int i = 0; i < k; ++i)
            feq.push_back(vp[i].first);
        
        return feq;
    }
};