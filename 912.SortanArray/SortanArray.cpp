class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        ios::sync_with_stdio(0);
        cin.tie(0);

        vector<int> v(100003, 0);
        for(auto a : nums){
            v[a + 50000]++;
        }

        vector<int> ans;
        for(int i = 0; i < 100003; ++i)
            if(v[i] > 0)
                for(int j = 0; j < v[i]; ++j)
                    ans.push_back(i - 50000);

        return ans;
    }
};
