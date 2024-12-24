class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

    //  // MOST OPTIMAL APPROACH
    //   int i=0, j=0;
      int n = nums.size();

    //   while(j < n){
        
    //     if(nums[j] == 0) k--;

    //     // if k is negative that means we have used extra zeros so strink the size of sub array   
    //     if(k < 0){
    //         if(nums[i] == 0) k++; // if we are removing zero that means we need to increase the k 
    //         i++;
    //     }
    //     j++;
    //   } 

    //   return j-i;
     //  OPTIMAL APPROACH
      int l=0, r=0;
      int zeros = 0;
      int ans = 0;

      while(r < n){
        
        if(nums[r] == 0) zeros++;
        
        while(zeros > k){
            if(nums[l] == 0) zeros--;
            l++;
        }
       
        ans = max(ans, r-l+1);
        r++;
      } 

      return ans;

    // BRUTE FORCE APPROACH
    //    for(int i=0; i<n; i++){
    //     int count1s=0;
    //     int k2 = k;

    //     for(int j=i; j<n; j++){
            
    //         if(nums[j] == 0 && k2 == 0) break;
    //         if(nums[j] == 0) k2--;
    //         count1s++;
    //     }
    //       maxConsecutive1s = max(count1s, maxConsecutive1s);
    //    } 

    //    return maxConsecutive1s;
    }
};