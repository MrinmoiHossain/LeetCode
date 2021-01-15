class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n < 2)
            return n;
        
        vector<int> v(n + 1);
        int mx = 1;
        v[0] = 0;
        v[1] = 1;
        
        for(int i = 2; i <= n; ++i){
            v[i] = i % 2 == 0 ? v[i / 2] : v[i / 2] + v[i / 2 + 1];
            mx = max(mx, v[i]);
        }
        
        return mx;
    }
};