/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {

    let ansStr = strs[0];

    for(let i=1; i<strs.length; i++){
        let word = strs[i];
        let j=0;
        for(j; j<Math.min(word.length, ansStr.length); j++){
            if(ansStr[j] != word[j]) {
                break;
            }
        }
        ansStr = ansStr.slice(0, j);

    }

    return ansStr;
};