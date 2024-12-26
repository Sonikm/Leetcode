class Solution {
public:
    int helper(vector<int>& nums, int k){
         
         if(k < 0) return 0;

         int n = nums.size();
         int l=0,r=0,sum=0,cnt=0;

         while(r < n){
           // sum only odd --> if nums[r] is even so mod of even is 0
           sum += (nums[r] % 2); // even = 0, odd = 1 

           while(sum > k){
            sum -= (nums[l] % 2);
            l++;
           }

           cnt += r - l + 1;
           r++;
         }

         return cnt;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return helper(nums, k) - helper(nums, k-1);
    }
};