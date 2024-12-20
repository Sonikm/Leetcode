class Solution {
public:
    
    set<vector<int>> s;

    void getAllCombinations(vector<int>& arr, int i, int target,vector<int>& combi, vector<vector<int>>& ans){
       
        if(i >= arr.size() || target < 0) return;
        if(target == 0) {
            if(s.find(combi) == s.end()){
              ans.push_back(combi);
              s.insert(combi);
            }
            return;
        }

        combi.push_back(arr[i]);
        // single include
        getAllCombinations(arr, i+1, target-arr[i], combi, ans);
        // multiple include
        getAllCombinations(arr, i, target-arr[i], combi, ans);

        combi.pop_back();
        // exclusion
        getAllCombinations(arr, i+1, target, combi, ans); // backtraching
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combi;

        getAllCombinations(candidates, 0, target, combi, ans);

        return ans;
    }
};