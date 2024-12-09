/**
 * @param {string} s
 * @return {number}
 */
var myAtoi = function(s) {
    s = s.trim();
    if(s.length == 0) return 0;
   
    // check sign
    let isNagitive = false;
    let i=0;
    if(s[i] == '-' || s[i] == '+'){
       isNagitive = s[i] == '-' ? true : false; 
       i++;       
    }

    let ans = 0;

    while(i < s.length && (s[i] >= '0' && s[i] <= '9')){
        ans = ans * 10 + parseInt(s[i]);
        i++;
    }

    ans = isNagitive ? -ans : ans;
   
    let INT_MAX = 2 ** 31 - 1;
    let INT_MIN = -(2 ** 31)

    if(ans > INT_MAX) return INT_MAX;
    if(ans < INT_MIN) return INT_MIN;

    return ans;
};