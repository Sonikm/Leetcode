/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
    let maxi = nums[0];
    let sum = 0;
    let n = nums.length;
    for(let i=0; i<n; i++){
         sum = sum + nums[i];
         maxi = Math.max(maxi, sum);
         if(sum < 0) sum = 0;
    }

    return maxi;
};