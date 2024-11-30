/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number}
 */
var subarraySum = function(nums, k) {

    // if(k == 0) return;
    let i=0, sum=0, n=nums.length;
    let count=0;

    for(let i=0; i<n;i++){
        sum = 0;
     for(let j=i; j<n;j++){
        sum += nums[j];
        if(sum == k) count++;
        else if(sum > k) break;
    }
    }

    return count;
};