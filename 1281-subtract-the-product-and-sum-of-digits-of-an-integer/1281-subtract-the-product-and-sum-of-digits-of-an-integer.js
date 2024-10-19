/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let sum = 0;
    let prod = 1;

    while(n>0){
        let rem = n%10;
        sum += rem;
        prod *= rem;
        n = Math.floor(n/10);
    }

    return prod - sum;
};