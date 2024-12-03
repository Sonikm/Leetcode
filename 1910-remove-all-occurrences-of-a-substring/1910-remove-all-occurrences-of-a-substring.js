/**
 * @param {string} s
 * @param {string} part
 * @return {string}
 */
var removeOccurrences = function(s, part) {
    for(let c of s){
        if(s.includes(part)){
            s = s.replace(part,"");
        }
    }

    return s;
};