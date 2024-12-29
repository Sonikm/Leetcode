class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int r, int c, int n, int expValue){

     if(r < 0 || c < 0 || r >= n || c >= n || grid[r][c] != expValue) {
         return false; 
     }
     if(expValue == n*n-1) {
        return true;
     }
      
    //   8 possible moves
      int move1 = isValid(grid, r-2, c+1, n, expValue+1);
      int move2 = isValid(grid, r-1, c+2, n, expValue+1);
      int move3 = isValid(grid, r+1, c+2, n, expValue+1);
      int move4 = isValid(grid, r+2, c+1, n, expValue+1);
      int move5 = isValid(grid, r+2, c-1, n, expValue+1);
      int move6 = isValid(grid, r+1, c-2, n, expValue+1);
      int move7 = isValid(grid, r-1, c-2, n, expValue+1);
      int move8 = isValid(grid, r-2, c-1, n, expValue+1);

      return move1 || move2 || move3 || move4 || move5 || move6 || move7 || move8;
    }

    bool checkValidGrid(vector<vector<int>>& grid) {
      
      // we need to check 8 moves from 0 to n--> if last expected move is equable to n*n-1 that means true
      return isValid(grid, 0, 0, grid.size(), 0);  
    }
};