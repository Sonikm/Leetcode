class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++){
            int len = matrix[i].size(); // take a column size

            for(int j=0; j<len; j++){
                if(matrix[i][j] == target){
                    return true;
                }
            }
        }

        return false;
    }
};