/**
 * @param {number} n
 * @return {number}
 */
var hammingWeight = function(n) {
    let count = 0;

    while(n){
        // checking last bit
        if(n&1)count++;
        n = n >> 1;
    }

    return count;
};