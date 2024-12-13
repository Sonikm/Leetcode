class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

       int n = nums.size();
       if(n < 4) return {};

       vector<vector<int>> ans;

       sort(nums.begin(), nums.end());

       for(int i=0; i<n; i++){
        while(i < n && i > 0 && nums[i] == nums[i-1]) i++;

        for(int j=i+1; j<n; j++){
          int k= j+1, l=n-1;
          while(k < l && l < n){
          int a = nums[i], b = nums[j], c = nums[k] , d = nums[l];
          int sum = a+b+c+d;

          if(sum > target) l--;
          else if(sum < target) k++;
          else {
            
            ans.push_back({a,b,c,d});
            k++, l--;
            cout << i << endl;
            
            while(nums[k] == nums[k-1] && k < l) k++;
           }
          }
            while(j < n-1 && nums[j] == nums[j+1]) j++;
        }
       }

       return ans;

    }
};