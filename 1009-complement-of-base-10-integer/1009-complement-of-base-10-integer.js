/**
 * @param {number} n
 * @return {number}
 */
var bitwiseComplement = function(n) {
    if(n === 0) return 1;
   let ans = 0;
        let i = 0;

        while(n){
            // let bit = n & 1;
            if(!(n & 1)){
              ans = 1 * Math.pow(2, i) + ans;
            }

            n = n >> 1;
            i++;
        }

        return ans; 
};