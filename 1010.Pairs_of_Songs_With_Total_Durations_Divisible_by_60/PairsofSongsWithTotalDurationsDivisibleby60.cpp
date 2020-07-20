class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        map<int, int> m;
        int ans = 0;
        
        for(auto v : time){
            int temp = v % 60;
            ans += m[(60 - temp) % 60];
            m[temp]++;
        }
        
        return ans;
    }
};