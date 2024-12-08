/**
 * @param {string} s
 * @return {number}
 */
var maxDepth = function(s) {
    let cnt=0;
    let ans = 0;

    for(let c of s){
        if(c === '('){
            cnt++;
            ans = Math.max(ans, cnt);
        }
        if(c == ')'){
           cnt--;
        }
    }

    return ans;
};