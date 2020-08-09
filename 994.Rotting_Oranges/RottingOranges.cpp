class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        queue<pair<int,int>> q;
        int row = grid.size(), col = grid[0].size();
        int zero = 0;
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(grid[i][j] == 2)
                    q.push({i, j});
                else if(grid[i][j] == 0)
                    zero++;
            }
        }
        
        int minute = 0;
        int orange = (row * col) - zero;
        int count = q.size();
        
        while(count < orange && !q.empty()){
            minute++;
            int n = q.size();
            
            for(int i = 0; i < n; ++i){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                if(x > 0 && grid[x - 1][y] == 1){
                    q.push({x - 1, y});
                    grid[x - 1][y] = 2;
                }
                if(x < row - 1 && grid[x + 1][y] == 1){
                    q.push({x + 1, y});
                    grid[x + 1][y] = 2;
                }
                if(y > 0 && grid[x][y - 1] == 1){
                    q.push({x, y - 1});
                    grid[x][y - 1] = 2;
                }
                if(y < col - 1 && grid[x][y + 1] == 1){
                    q.push({x, y + 1});
                    grid[x][y + 1] = 2;
                }
            }
            
            count += q.size();
            if(count == orange)
                return minute;
        }
        
        if(count < orange)
            return -1;
        return minute;
    }
};