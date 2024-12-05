/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    // s = s.split("").sort().join("");
    // t = t.split("").sort().join("");

    // return s === t;

    //More optimized
    if(s.length !== t.length) return false;

    let obj1 = {};
    let obj2 = {};

    for(let i in s){
        obj1[s[i]] = (obj1[s[i]] || 0) + 1;
        obj2[t[i]] = (obj2[t[i]] || 0) + 1;
    }

    for(let key in obj1){
        if(obj1[key] != obj2[key]) return false;
    }

    return true;
};