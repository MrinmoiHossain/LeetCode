class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans(digits);
        int n = ans.size() - 1;

        if(ans[n] != 9){
            ans[n] += 1;
            return ans;
        }

        int carry = 1;
        for(int i = n; i >= 0; --i){
            int sum = (ans[i] + carry);
            ans[i] = sum % 10;
            carry = sum / 10;
        }

        if(ans[0] == 0){
            ans.push_back(0);
            ans[0] = 1;
        }

        return ans;
    }
};
