class Solution {
public:
    int maxCoins(vector<int>& piles) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        
        sort(begin(piles), end(piles));
        
        int count = 0;
        for(int i = piles.size() / 3; i < piles.size(); i += 2)
            count += piles[i];
        
        return count;
    }
};