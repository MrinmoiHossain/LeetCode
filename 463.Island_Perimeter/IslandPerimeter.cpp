class Solution {
public:
    int isNeighbour(vector<vector<int>>& grid, int i, int j) {
        int con = 0;
        int row = grid.size(), col = grid[0].size();
        
        if(i > 0 && grid[i - 1][j])
            con++;
        if(i < row - 1 && grid[i + 1][j])
            con++;
        
        if(j > 0 && grid[i][j - 1])
            con++;
        if(j < col - 1 && grid[i][j + 1])
            con++;
        
        return con;
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        int perimeter = 0;
        for(int i = 0; i < row; ++i)
            for(int j = 0; j < col; ++j)
                if(grid[i][j])
                    perimeter += (4 - isNeighbour(grid, i, j));
        
        return perimeter;
    }
};