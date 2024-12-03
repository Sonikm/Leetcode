/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    var palim = "";

    for(let c of s){
        c = c.toLowerCase();
        if((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')){
           palim += c;
        }
    }

    let left = 0, right = palim.length-1;

     while(left < right){
        if(palim.charAt(left) != palim.charAt(right)) return false;
        left++, right--;
     }

    return true;
};