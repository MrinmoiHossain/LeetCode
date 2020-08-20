class Solution {
public:
    vector<int> numsSameConsecDiff(int N, int K) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        queue<int> q;
        for(int i = 1; i <= 9; ++i)
            q.push(i);
        
        for(int i = 1; i < N; ++i){
            int sz = q.size();
            
            for(int j = 0; j < sz; ++j){
                int num = q.front();
                q.pop();
                
                int digit = num % 10;
                if(digit + K < 10)
                    q.push(num * 10 + digit + K);
                if(digit - K >= 0 && K != 0)
                    q.push(num * 10 + digit - K);
            }
        }
        
        vector<int> ans;
        if(N == 1)
            ans.push_back(0);
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
    }
};