/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    
    // create an object to store count of char
    let obj = {};

    // store count of all 
    for(let c of s) {
        obj[c] = (obj[c] || 0)+1;
    }

    let arr = [];

    // convert an array to sort it
    for(let key in obj){
      arr.push([key, obj[key]]);
    }
   
   // sort by value
    arr.sort((a, b) => b[1] - a[1]);

    let ans = "";

    //now concatinate characters in answer
    console.log(obj)
    console.log(arr)
    for(let a of arr){
      let char = a[0];
      let count = a[1];
      let i=0;

      while(i<count){
        ans += char;
        i++;
      }
    }

    return ans;
};