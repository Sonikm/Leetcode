class Solution {
public:
    void getUniquePermute(vector<int>& nums, int idx, vector<vector<int>>& ans, set<vector<int>>& s ){

      if(idx == nums.size()){
        if(s.find(nums) == s.end()){
            ans.push_back(nums);
        }
        s.insert(nums);
        return;
      } 

      for(int i=idx; i<nums.size(); i++){
        swap(nums[i], nums[idx]); // swap ith element
        getUniquePermute(nums, idx+1, ans, s);
        swap(nums[i], nums[idx]); // backtracking
      }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        set<vector<int>> s;

        getUniquePermute(nums, 0, ans, s);

        return ans;
    }
};