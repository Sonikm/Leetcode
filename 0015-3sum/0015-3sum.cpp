class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();

        sort(nums.begin(), nums.end()); // sort

        for(int i=0; i<n; i++){
          
          if(i>0 && nums[i] == nums[i-1]) continue;
          int j=i+1, k = n-1;

          while(j<k){
            int sum = nums[i] + nums[j] + nums[k];
            
            if(sum > 0) k--;
            else if(sum < 0) j++;
            else {
                vector<int> trip = {nums[i], nums[j], nums[k]};
                ans.push_back(trip);
                j++, k--;

                while(j<k && nums[j] == nums[j-1]) j++;
            }
          }
       }

        return ans;
       
    }
};