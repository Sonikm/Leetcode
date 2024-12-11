class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int n = matrix.size(), m = matrix[0].size();
        int srow=0, scol=0;
        int erow=n-1, ecol=m-1;

        while(srow <= erow && scol <= ecol){
            // LEFT to RIGHT 
           for(int j=scol; j<=ecol; j++){
            ans.push_back(matrix[srow][j]);
           }

        //    TOP TO BOTTOM
        for(int i=srow+1;i<=erow; i++){
             ans.push_back(matrix[i][ecol]);
        }

        // RIGHT TO LEFT
        for(int j=ecol-1;j>=scol; j--){
            if(srow == erow) break;
            ans.push_back(matrix[erow][j]);
        }

        // BOTTOM TO TOP
        for(int i=erow-1; i>= srow+1; i--){
            if(scol == ecol) break;
            ans.push_back(matrix[i][scol]);
        }

        srow++, scol++, erow--, ecol--;

     }

    
      return ans;
    }
};