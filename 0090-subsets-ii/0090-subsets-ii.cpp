class Solution {
public:

   void getAllSubsets(vector<int>& nums, vector<int>& ans,int i, vector<vector<int>>& allSubsets, set<vector<int>>& s ){
     if(i == nums.size()){
        
        if(s.find(ans) == s.end()){
          allSubsets.push_back({ans});
        }
        s.insert(ans);
        return;
     }

     // includes
      ans.push_back(nums[i]);
      getAllSubsets(nums, ans, i+1, allSubsets, s);

      //excludes
      ans.pop_back();
      getAllSubsets(nums, ans, i+1, allSubsets, s);
   }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        set<vector<int>> s;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        getAllSubsets(nums, ans, 0, allSubsets, s);

        return allSubsets;
    }
};