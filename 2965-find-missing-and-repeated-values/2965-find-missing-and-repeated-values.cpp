class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        map<int, int> m;
        int n = grid.size();
        vector<int> ans;

        for(int i=0; i<n; i++){ // rows
            for(int j=0; j<n; j++){ // columns
              m[grid[i][j]] = (m[grid[i][j]] || 0)+1;
            }
        }

        int dup, missing;

        for(int i=1; i<=n*n; i++){
            if(!m[i]){
                // store missing value;
                missing = i;
            }
            else if(m[i] == 2){
                // store duplicate value
                dup = i;
            }
        }

        ans.push_back(dup);
        ans.push_back(missing);

        return ans;

    }
};