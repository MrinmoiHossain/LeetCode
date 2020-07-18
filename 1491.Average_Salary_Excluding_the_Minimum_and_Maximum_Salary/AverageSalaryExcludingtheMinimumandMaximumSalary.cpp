class Solution {
public:
    double average(vector<int>& salary) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        double mn = 10000000, mx = -99, sum = 0.0;
        int n = salary.size() - 2;
        
        for(auto v : salary){
            sum += (double)v;
            
            mn = min(mn, (double)v);
            mx = max(mx, (double)v);
        }
        sum -= (mn + mx);
        return (sum/n);
    }
};