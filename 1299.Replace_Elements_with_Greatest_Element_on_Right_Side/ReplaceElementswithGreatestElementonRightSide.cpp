class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        vector<int> ans(n + 1);
        
        int mx = arr[n];
        for(int i = n - 1; i >= 0; --i){
            ans[i] = mx;
            mx = max(mx, arr[i]);
        }
        ans[n] = -1;
        
        return ans;
    }
};