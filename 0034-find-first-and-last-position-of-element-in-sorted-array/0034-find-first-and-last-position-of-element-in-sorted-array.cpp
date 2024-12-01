class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector<int> ans(2, -1);
        int n = nums.size();
        int s=0, e=n-1;
       
        if(n == 0) return  ans;

        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid] >= target) e = mid-1;
            else s = mid+1;
        }

         if(s >= n || nums[s] != target) return ans;
         cout<< nums[s] << endl;
         ans[0] = s;
         e=n-1;

        while(s<=e){
           int mid = s+(e-s)/2;
           if(nums[mid] <= target) s = mid+1;
           else e = mid-1;
        }

        ans[1] =  e;

        return ans;
    }
};