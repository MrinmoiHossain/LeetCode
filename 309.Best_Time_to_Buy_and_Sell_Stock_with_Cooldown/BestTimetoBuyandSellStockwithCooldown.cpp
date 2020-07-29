class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int held = INT_MIN;
        int sold = 0;
        int reset = 0;
        
        for(auto p : prices){
            int pre_sold = sold;
            sold = held + p;
            held = max(held, reset - p);
            reset = max(reset, pre_sold);
        }
        
        return max(sold, reset);
    }
};