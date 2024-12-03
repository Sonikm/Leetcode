/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function(s) {
    let str = s.trim().replace(/\s+/g, ' ').split(" ").reverse().join(" ");

    return str;
};