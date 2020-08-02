class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        int n = arr.size();
        int ans = 0;
        
        for(int i = 0; i < n - 2; ++i){
            for(int j = i + 1; j < n - 1; ++j){
                if(abs(arr[i] - arr[j]) > a)
                    continue;
                
                for(int k = j + 1; k < n; ++k){
                    if(abs(arr[j] - arr[k]) <= b && abs(arr[k] - arr[i]) <= c)
                        ans++;
                }
            }
        }
        
        return ans;
    }
};