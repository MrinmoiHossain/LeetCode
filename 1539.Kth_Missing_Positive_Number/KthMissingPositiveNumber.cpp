class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int> s(begin(arr), end(arr));
        
        int ans = 0;
        for(int i = 1; ; ++i){
            if(s.find(i) == s.end()){
                k--;
                if(k == 0){
                    ans = i;
                    break;
                }
            }
        }
        
        return ans;
    }
};