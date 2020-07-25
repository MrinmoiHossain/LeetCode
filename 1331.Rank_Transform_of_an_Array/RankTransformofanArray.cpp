class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        int n = arr.size();
        if(n == 0)
            return arr;
        
        int min_ele = *min_element(arr.begin(), arr.end());
        int max_ele = *max_element(arr.begin(), arr.end());
        
        vector<int> v(max_ele - min_ele + 1, 0);
        for(auto a : arr)
            v[a - min_ele] = 1;
        
        int rank = 1;
        for(int i = 0; i < v.size(); ++i){
            if(v[i]){
                v[i] = rank++;
            }
        }
        
        for(auto& a : arr)
            a = v[a - min_ele];
        
        return arr;
    }
};