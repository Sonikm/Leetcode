class Solution {
public:
   bool isSafe(vector<vector<char>>& board, int row, int col, char digit){
    for(int i=0; i<9; i++){
        // horizontal ==> cols
        if(board[row][i] == digit) return false;

        // vertical ==> rows
        if(board[i][col] == digit) return false;

        if(board[3*(row/3)+i/3][3*(col/3)+i%3] == digit) return false;
    }

    return true;
   }
   
    bool solve(vector<vector<char>>& board){
      for(int row=0; row<9; row++){
        for(int col=0; col<9; col++){
            // check empty
            if(board[row][col] == '.'){
                for(char dig='1'; dig<='9'; dig++){
                   if(isSafe(board, row, col, dig)){
                    board[row][col] = dig;
                    bool aageSolutionPossible = solve(board);
                    if(aageSolutionPossible) {
                        return true;
                    }else {
                        // backtracking
                         board[row][col] = '.';
                    }
                   }
                }
                return false;
            }
        }
      }

      return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
      solve(board);  
    }
};