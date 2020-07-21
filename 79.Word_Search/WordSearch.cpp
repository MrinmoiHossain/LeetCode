class Solution {
public:
    int row, col;
    string s;
    
    bool exist(vector<vector<char>>& board, string word) {
        row = board.size();
        col = board[0].size();
        s = word;
        
        for(int i = 0; i < row; ++i){
            for(int j = 0; j < col; ++j){
                if(board[i][j] == s[0]){
                    bool found = dfs(0, i, j, board);
                    if(found)
                        return true;
                }
            }
        }
        
        return false;
    }
    
    bool dfs(int pos, int i, int j, vector<vector<char>>& board){
        if(pos == s.length())
            return true;
        if(i < 0 || i >= row || j < 0 || j >= col || board[i][j] != s[pos])
            return false;
        
        char temp = board[i][j];
        board[i][j] = '#';
        
        bool res = dfs(pos + 1, i + 1, j, board) || dfs(pos + 1, i, j + 1, board)
                || dfs(pos + 1, i - 1, j, board) || dfs(pos + 1, i, j - 1, board);
        
        board[i][j] = temp;
        
        return res;
    }
};