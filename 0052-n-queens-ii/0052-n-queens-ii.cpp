class Solution {
public:

   bool isSafe(vector<string> board, int n, int row, int col){
     
      // horizontal
      for(int j=0; j<n; j++){
        if(board[row][j] == 'Q') return false;
      }
     
      // vertical
      for(int i=0; i<n; i++){
        if(board[i][col] == 'Q') return false;
      }
     
      // left diagnol
      for(int i=row,j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j] == 'Q') return false;
      }
     
      // right diagnol
      for(int i=row,j=col; i>=0 && j<n; i--, j++){
        if(board[i][j] == 'Q') return false;
      }

      return true;
   }
 
    void nQueens(vector<string> &board, int n, int row, int &count){
      
       if(row == n){
         count++;
         return;
       }

        for(int j=0; j<n; j++){
            if(isSafe(board, n, row, j)){
                board[row][j] = 'Q';
                nQueens(board, n, row+1, count);
                board[row][j] = '.'; // backtracking
            }
        }
    }

    int totalNQueens(int n) {
        vector<string> board(n, string(n, '.'));
        int count = 0;

        nQueens(board, n, 0, count);
        return count;
    }
};