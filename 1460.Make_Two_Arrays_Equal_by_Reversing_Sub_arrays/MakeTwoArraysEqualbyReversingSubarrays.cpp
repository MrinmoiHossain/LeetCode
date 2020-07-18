class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        vector<int> t(1001, 0);
        vector<int> a(1001, 0);
        
        for(int i = 0; i < target.size(); ++i){
            t[target[i]]++;
            a[arr[i]]++;
        }
        
        for(int i = 1; i <= 1000; ++i){
            if(t[i] != a[i])
                return false;
        }
        
        return true;
    }
};