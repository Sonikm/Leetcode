class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> temp = matrix;

        for(int r=0; r<n; r++){
            for(int c=n-1; c>=0; c--){
                temp[c][n-r-1] = matrix[r][c];
            }
        }

         for(int r=0; r<n; r++){
            for(int c=0; c<n; c++){
                matrix[r][c] = temp[r][c];
            }
         }

    }
};