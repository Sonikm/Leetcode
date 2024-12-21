/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number}
 */
var threeSumClosest = function(nums, target) {
   nums.sort((a, b) => a-b);
   let n = nums.length;
   let closestSum = 2**31-1;

   for(let i=0; i<n; i++){
   let left= i+1, right=n-1;
    while(left<right){
    let currentSum = nums[i] + nums[left] + nums[right];
     
    if(Math.abs(currentSum - target) < Math.abs(closestSum - target)){
        closestSum = currentSum;
    }
    if(currentSum < target) left++;
    else if(currentSum > target) right--;
    else return currentSum;
   }
}

return closestSum;

};