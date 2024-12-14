/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
       let ans = [];
       let n1 = nums1.length;
       let n2 = nums2.length;
       let obj1 = {};
       let obj2 = {};

       for(let i=0; i<n1; i++){
         obj1[nums1[i]] = 1;
       }

       for(let i=0; i<n2; i++){
         obj2[nums2[i]] = 1;
       }

       for(let key in obj1){
         if(obj2[key]){
            ans.push(parseInt(key));
         }
       }

       return ans;
};