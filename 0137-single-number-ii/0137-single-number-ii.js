/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let freq = {};

    for(let x of nums){
        freq[x] = (freq[x] || 0) + 1; // count all element with their frequency
    }

    for(let key in freq){
        if(freq[key] == 1) return parseInt(key);
    }

    return 0;
};