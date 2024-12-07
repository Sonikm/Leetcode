/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isIsomorphic = function(s, t) {
    
     if(s.length != t.length) return false;

     let ansObj = {};

     for(let i=0; i<s.length; i++){
        if(!ansObj[s[i]]) // check value is present or not
        {
            ansObj[s[i]] = t[i]; // anssig value to key
        }
        else if(ansObj[s[i]] !== t[i]) return false;
     }

     return true;
};