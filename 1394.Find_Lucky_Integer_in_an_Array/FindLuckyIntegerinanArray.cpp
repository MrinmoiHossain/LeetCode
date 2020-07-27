class Solution {
public:
    int findLucky(vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> v(501, 0);
        for(auto a : arr){
            v[a]++;
        }
        
        int mx = -1;
        for(int i = 0; i < 501; ++i){
            if(v[i] > 0 && v[i] == i)
                mx = max(mx, i);
        }
        
        return mx;
    }
};