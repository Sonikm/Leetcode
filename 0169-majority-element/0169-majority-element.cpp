class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n = nums.size();

     sort(nums.begin(), nums.end());

     int ans = nums[0];
     int freq=1;

     for(int i=1; i<n;i++){
        if(nums[i] == nums[i-1]) freq++;
        else{
            freq=1;
            ans = nums[i];
        }

        if(freq > n/2) return ans;
     }

    return ans;

    //  for(int val:nums){
    //     int freq = 0;
    //     for(int el:nums){
    //         if(val == el) freq++;
    //     }

    //     if(freq > n/2) return val;
    //  }
    // return -1;
    }

};