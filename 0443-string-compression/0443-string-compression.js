/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function(chars) {
    let str = "";
    let i=0, n = chars.length;
    let freq=1;

    for(let j=1; j<n; j++){
         if(chars[j] == chars[j-1]) freq++;
         else if((chars[j] != chars[j-1]) && (freq > 1) ){
           str = str.concat(chars[j-1], freq);
            // chars[i++] = `${freq}`;
            freq = 1;
         }
         else {
            str = str.concat(chars[j-1]);
         }
    }

    if(freq > 1){
          str = str.concat(chars[n-1], freq);
    }else {
          str = str.concat(chars[n-1]);
    }

    for(let i=0; i<str.length; i++){
        chars[i] = `${str[i]}`;
    }

    console.log(str);

    return str.length;
};