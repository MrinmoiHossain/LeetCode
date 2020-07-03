class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        vector<int> curr_cells(cells.size(), 0), prev_cells(cells.size());
        
        int cycle = 0;
        for(int cycle = 0; N-- > 0; ++cycle){
            for(int i = 1; i < 7; ++i)
                curr_cells[i] = (cells[i - 1] == cells[i + 1]);
            
            if(cycle == 0)
                prev_cells = curr_cells;
            else if(curr_cells == prev_cells)
                N %= cycle;
            
            cells = curr_cells;
        }
        
        return cells;
    }
};