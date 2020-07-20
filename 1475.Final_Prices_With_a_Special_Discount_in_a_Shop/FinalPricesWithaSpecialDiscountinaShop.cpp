class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        for(int i = 0; i < prices.size(); ++i){
            for(int j = i + 1; j < prices.size(); ++j){
                if(prices[i] >= prices[j]){
                    prices[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        
        return prices;
    }
};