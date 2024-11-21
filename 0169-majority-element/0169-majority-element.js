/**
 * @param {number[]} nums
 * @return {number}
 */
var majorityElement = function(nums) {
    let n = nums.length; 
     
     let ans =0;
     let freq=0;

    // O(n)
     for(let i=0; i<n;i++){
        if(freq == 0) ans = nums[i];
        if(ans == nums[i]) freq++;
        else {
            freq--;
        }
     }

     return ans;

    /*  

    || O(nlogn)
   // Sorting
   nums.sort((a,b) => a-b);

   // find majority element
   let freq = 1;
   let ans = nums[0];

   for(let i=1; i<n; i++ ){
    if(nums[i] == nums[i-1]){
         freq++;
    }
    else {
        freq = 1;
        ans = nums[i];
    }

   if((freq) > Math.floor(n/2)) return ans;

   }

    return ans;

    */
};