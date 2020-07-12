class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        int mod = 1000000007;

        vector<int> sum;
        for(int i = 0; i < n; ++i){
            int presum = 0;
            for(int j = i; j < n; ++j){
                presum += nums[j];
                sum.push_back(presum);
            }
        }

        sort(sum.begin(), sum.end());
        int total = 0;
        for(int i = left - 1; i < right; ++i){
            total += (sum[i] % mod);
            total %= mod;
        }

        return total;
    }
};
