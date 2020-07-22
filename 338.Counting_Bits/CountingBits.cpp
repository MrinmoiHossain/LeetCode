class Solution {
public:
    vector<int> countBits(int num) {
        if(num == 0)
            return {0};
       
        vector<int> ans(num + 1, 0);
        ans[0] = 0;
        ans[1] = 1;
        
        int a = 0, b = 1;
        long long c = pow(2, a), d = pow(2, b);
        
        for(int i = 2; i <= num; ++i){
            if(i >= d){
                a++;
                b++;
                c = pow(2, a);
                d = pow(2, b);
            }
            ans[i] = ans[i - c] + 1;
        }
        
        return ans;
    }
};