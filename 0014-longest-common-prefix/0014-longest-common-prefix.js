/**
 * @param {string[]} strs
 * @return {string}
 */
var longestCommonPrefix = function(strs) {

    let ansStr = strs[0];

    for(let i=1; i<strs.length; i++){
        let s = "";
        let word = strs[i];

        for(let j=0; j<Math.min(word.length, ansStr.length); j++){
            if(ansStr[j] != word[j]) {
                break;
            }
            s += word[j];
        }

        if(s === "") return "";
        ansStr = s;
    }

    return ansStr;
};