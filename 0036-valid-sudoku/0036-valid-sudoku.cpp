class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char val) {
        // Check the current column
        for (int j = 0; j < 9; j++) {
            if (j != col && board[row][j] == val) return false;
        }
        // Check the current row
        for (int i = 0; i < 9; i++) {
            if (i != row && board[i][col] == val) return false;
        }
        // Check the 3x3 subgrid
        int srow = (row / 3) * 3;
        int scol = (col / 3) * 3;
        set<char>s;
        for (int i = srow; i < srow + 3; i++) {
            for (int j = scol; j < scol + 3; j++) {
                if (board[i][j] != '.') {
                    if(s.find(board[i][j]) != s.end()){
                        return false;
                    }
                    s.insert(board[i][j]);
                }
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        for (int row = 0; row < 9; row++) {
            for (int col = 0; col < 9; col++) {
                // Check only filled cells
                if (board[row][col] != '.') {
                    if (!isValid(board, row, col, board[row][col])) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
