class Solution {

    int isPossible(vector<int>& nums,int n, int k, int mid){
       int subArrayCount=1;
       int subArraySum=0;

       for(int i=0; i<n; i++){
        if(subArraySum + nums[i] <= mid) subArraySum += nums[i];
        else{
          subArrayCount++;
          if(subArrayCount > k || nums[i] > mid) return false;
          subArraySum = nums[i];
        }
       }

       return true;
    }
    
public:
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size();
        int sum = 0;

        for(int i=0; i<n; i++){
            sum +=nums[i];
        }

        int s = 0, e=sum;
        int mid = s + (e-s)/2;
        int ans = -1;

        while(s<=e){
          if(isPossible(nums, n, k, mid)){
            ans = mid;
            e = mid-1;
          }
          else {
            s = mid+1;
          }
          mid = s + (e-s)/2;
        }

        return ans;


    }
};