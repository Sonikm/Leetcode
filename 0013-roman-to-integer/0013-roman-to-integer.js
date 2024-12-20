/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function(s) {
    let obj = {
        'I': 1,
        'V': 5,
        'X': 10,
        'L': 50,
        'C': 100,
        'D': 500,
        'M': 1000,
    }

    let ans = 0;
    let i=0;

    for(i; i<s.length-1; i++){
        if(s[i] === 'M'){
            ans += obj[s[i]];
        }
        else if(obj[s[i]] >= obj[s[i+1]]){
            ans += obj[s[i]];
        }else {
            ans -= obj[s[i]];
        }
    }

     ans += obj[s[i]];

     return ans;

};