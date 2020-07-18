class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> degree(numCourses, 0);
        
        for(auto v : prerequisites){
            adj[v[1]].push_back(v[0]);
            degree[v[0]]++;
        }
        
        queue<int> q;
        for(int i = 0; i < numCourses; ++i)
            if(degree[i] == 0)
                q.push(i);
        
        vector<int> topologicalOrder;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            topologicalOrder.push_back(curr);
            
            for(auto next : adj[curr])
                if(--degree[next] == 0)
                    q.push(next);
        }
        
        return (topologicalOrder.size() == numCourses? topologicalOrder : vector<int>(0));
    }
};