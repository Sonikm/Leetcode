/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let ans = '';
    for(let i=0; i<s.length; i++){

        let lastWord = '';
        while(s[i] != " " && i < s.length){
          lastWord += s[i];
          ans = lastWord;
          i++;
        }
    }

    console.log(ans);

    return ans.length;
};