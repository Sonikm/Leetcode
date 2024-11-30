/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function(nums) {
   
    let maxi = nums[0];

    for(let i=0; i<nums.length; i++){
        let product = 1;
     for(let j=i; j<nums.length; j++){
       product = product * nums[j];
        maxi = Math.max(maxi, product);
     }
        // if(product === 0) product = 1;
    }

    return maxi;
};