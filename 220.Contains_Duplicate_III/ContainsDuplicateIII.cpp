class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        vector<pair<int, int>> v;
        int n = nums.size();
        
        for(int i = 0; i < n; ++i)
            v.push_back({nums[i], i});
        
        sort(begin(v), end(v));
        
        int i = 0, j = 1;
        while(j < n){
            long int f = v[i].first, s = v[j].first;
            int pos1 = v[i].second, pos2 = v[j].second;
            
            if(abs(f - s) <= t && abs(pos1 - pos2) <= k)
                return true;
            if(abs(f - s) > t)
                i++;
            if(abs(pos1 - pos2) > k)
                j++;
            if(i == j)
                j++;
        }
        
        return false;
    }
};