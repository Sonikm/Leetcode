class Solution {

    bool isValid(vector<int>& nums,int divisor, int threshold, int n){

       long long sum = 0;
       for(int i=0; i<n; i++){
          sum += ceil(nums[i]+divisor-1)/divisor;
          if(sum > threshold) return false;
       }

       return true;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int n = nums.size();

      // find greater element of the array
      int e = *max_element(nums.begin(), nums.end());
      int s=1;
      int ans = -1;

      while(s <= e){
        int mid = s + (e-s)/2;

        if(isValid(nums, mid, threshold, n)){
           ans = mid;
           e = mid-1; //  left
        }else {
            s = mid+1; // right
        }
      }

      return ans;
    }
};