/**
 * @param {number} start
 * @param {number} goal
 * @return {number}
 */
var minBitFlips = function(start, goal) {
    let n = start ^ goal;
    let count = 0;

    while(n){
        n = n & (n-1);
        count++;
    }

    return count;
};