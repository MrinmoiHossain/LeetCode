class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        while(stones.size() > 1){
            sort(stones.begin(), stones.end());
            
            int n = stones.size() - 1;
            int v = stones[n] - stones[n - 1];
            
            if(v == 0){
                stones.pop_back();
                stones.pop_back();
            }
            else{
                stones.pop_back();
                stones.pop_back();
                stones.push_back(v);
            }
        }
        
        if(stones.size() == 1)
            return stones[0];
        return 0;
    }
};