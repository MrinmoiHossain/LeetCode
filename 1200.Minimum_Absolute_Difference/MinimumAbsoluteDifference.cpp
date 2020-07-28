class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        sort(arr.begin(), arr.end());
        
        int mn = INT_MAX;
        for(int i = 1; i < arr.size(); ++i)
            mn = min(mn, arr[i] - arr[i - 1]);
        
        vector<vector<int>> v;
        for(int i = 1; i < arr.size(); ++i){
            if(mn == arr[i] - arr[i - 1])
                v.push_back({arr[i - 1], arr[i]});
        }
        
        return v;
    }
};