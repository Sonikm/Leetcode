/**
 * @param {string} s
 * @return {string}
 */
var removeOuterParentheses = function(s) {
    let str = "";
    let opening = 0, closing = 0;

    for(let c of s){
       
       c == "(" ? opening++ : closing++;

       if(opening === closing) {
           opening = 0, closing = 0;
       }
       if(opening > 1 && opening != closing) {
        str += c;
       }
    }

    return str;
};