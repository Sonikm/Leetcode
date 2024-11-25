class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

    // Optimal solution
    int n = nums.size();
    int st=0, end=n-1;
     if(n == 1) return nums[0];
     if(nums[st] != nums[st+1]) return nums[st];
     if(nums[end] != nums[end-1]) return nums[end];

    while(st<=end){
        int mid = st+(end-st)/2;

        if(nums[mid-1] != nums[mid] && nums[mid] != nums[mid+1]) return nums[mid];
   
        if(mid&1){ // Odd 
          if(nums[mid] == nums[mid-1]) st = mid+1; // check right
          else end = mid-1;
        }
        else{ // if mid even
            if(nums[mid] == nums[mid-1]) end = mid - 1; // left
            else st = mid+1; // right 
        }
    }

    return -1;



       // Brute force approach
    //    int n = nums.size()-2;
    //    int i=0;

    //     while(i <= n ){
    //         if(nums[i] == nums[i+1]) i +=2;
    //         else return nums[i];
    //     }

    //     return nums[i];
    }
};