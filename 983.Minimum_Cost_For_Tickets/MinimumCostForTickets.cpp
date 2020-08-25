class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size() - 1;
        vector<int> memo(days[n] + 1);
        set<int> s;
        
        for(int day : days)
            s.insert(day);
        
        for(int i = 1; i <= days[n]; ++i){
            if(s.count(i) == 0){
                memo[i] = memo[i - 1];
                continue;
            }
            memo[i] = min(min(memo[i - 1] + costs[0], memo[max(0, i - 7)] + costs[1]), memo[max(0, i - 30)] + costs[2]);
        }
        
        return memo[days[n]];
    }
};