class Solution {
public:
   
   void solve(vector<int>& arr, vector<int>& combi, vector<vector<int>>& result, int i, int target, int k){

    // base case
    if(k == 0 && target == 0) {
        result.push_back(combi);
        return;
    }
    if(k < 0 || target < 0 || i >= 9) return;

      // add value
      combi.push_back(arr[i]);
      solve(arr, combi, result, i+1, target-arr[i], k-1);
      // backtracking 
      combi.pop_back();
      solve(arr, combi, result, i+1, target, k);
   }

    vector<vector<int>> combinationSum3(int k, int n) {
       vector<vector<int>> result;
       vector<int> arr; 
       vector<int> combi; 

       for(int i=1; i<=9; i++){
         arr.push_back(i);
       }

       solve(arr, combi, result, 0, n, k);

       return result;
    }
};