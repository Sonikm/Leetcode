/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var sortColors = function(nums) {
    let zeros = 0;
    let ones = 0;
    let twos = 0;

    for(let j=0; j<nums.length; j++){
            if(nums[j] === 0) zeros++;
            if(nums[j] === 1) ones++;
            if(nums[j] === 2) twos++;
        }
    
    let i=0;
    while(zeros--) nums[i++] = 0;
    while(ones--) nums[i++] = 1;
    while(twos--) nums[i++] = 2;

    return nums;

     
};