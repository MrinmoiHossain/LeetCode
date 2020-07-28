class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        if(n == 0)
            return tasks.size();
        
        vector<int> v(26, 0);
        int mx = 0;
        for(auto c : tasks){
            v[c - 'A']++;
            mx = max(mx, v[c - 'A']);
        }
        
        mx--;
        int idle = mx * n + mx;
        for(auto a : v)
            idle -= min(mx, a);
        
        return ((int)tasks.size() + max(0, idle));
    }
};