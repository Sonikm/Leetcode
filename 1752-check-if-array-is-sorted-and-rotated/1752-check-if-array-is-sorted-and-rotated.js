/**
 * @param {number[]} nums
 * @return {boolean}
 */
var check = function(nums) {
    let count=0, n = nums.length;
    for(let i=1; i<n; i++){
        if(nums[i] < nums[i-1]) count++;
    }

    if(nums[0] < nums[n-1] ) count++;
    return count <= 1;
    // let temp=[];
    // let k=0, i=1,j=0, n = nums.length;

    // while(i < n && j < n){
    //     if(nums[i] >= nums[i-1]) i++;
    //     else {
    //         if(i+j < n){
    //             temp[j] = nums[i+j];
    //             j++;
    //         }else {
    //             temp[j] = nums[k];
    //             k++;
                
    //             j++;
    //         }
    //     }
    // }

    // for(let i=1; i<n; i++){
    //     if(temp[i] < temp[i-1]) return false;
    // }

    // return true;
};