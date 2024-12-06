/**
 * @param {number} n
 * @return {number}
 */
var countPrimes = function(n) {
    if(n <= 2) return 0;

    let arr = new Array(n).fill(true);
    let countPrime = 0;

   for(let i=2; i<n; i++){
     
        if(arr[i]){
            countPrime++;

            for(let j=i*2; j<n; j = j+i){
                arr[j] = false;
            }
        }
   }

   return countPrime;

};