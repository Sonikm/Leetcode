class Solution {
public:
    void getAllCombinationSum(vector<int>& nums, int index, vector<int>& combination, int target, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(combination);
            return;
        }
        if (index >= nums.size() || target < 0) return;

        // Include current number
        combination.push_back(nums[index]);
        getAllCombinationSum(nums, index + 1, combination, target - nums[index], result);
        combination.pop_back();

        // Exclude current number and skip duplicates
        int nextIndex = index + 1;
        while (nextIndex < nums.size() && nums[nextIndex] == nums[index]) nextIndex++;
        getAllCombinationSum(nums, nextIndex, combination, target, result);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> combination;
        vector<vector<int>> result;

        // Sort candidates to handle duplicates
        sort(candidates.begin(), candidates.end());
        getAllCombinationSum(candidates, 0, combination, target, result);

        return result;
    }
};
