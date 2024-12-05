/**
 * @param {string} num
 * @return {string}
 */
var largestOddNumber = function(num) {

    // while(num != ""){
    //     let lastInt = parseInt(num.at(-1));
    //     if(lastInt % 2 != 0) return num;
    //     num = num.slice(0, -1);
    // }

    while(num){
        let lastInt = parseInt(num.at(-1));
        // check odd even
        if(lastInt & 1)  return num;
        num = num.slice(0,-1);
    }

    return "";
};