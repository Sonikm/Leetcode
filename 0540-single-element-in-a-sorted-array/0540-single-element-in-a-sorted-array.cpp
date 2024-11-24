class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       // Brute force approach
       int n = nums.size()-2;
       int i=0;

        while(i <= n ){
            if(nums[i] == nums[i+1]) i +=2;
            else return nums[i];
        }

        return nums[i];
    }
};