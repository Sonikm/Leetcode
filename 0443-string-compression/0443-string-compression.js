/**
 * @param {character[]} chars
 * @return {number}
 */
var compress = function(chars) {
    let n = chars.length;
    let i=0;
    let freq=1;

    // More otimazed
    for(let j=1; j < n; j++){
      if(chars[j] == chars[i]) freq++;
      else if(chars[j] != chars[i] && freq > 1){
          chars[i++] = chars[j-1];
          for(let c of freq.toString()){
            chars[i++] = c;
          }
          freq=1;
      }
      else {
        chars[i++] = chars[j-1];
      }
    }

    if(freq > 1){
          chars[i++] = chars[n-1];
          for(let c of freq.toString()){
            chars[i++] = c;
          }
    }else {
         chars[i++] = chars[n-1];
    }

    return i;

     



    // let str = "";
    // let freq=1;

    // for(let j=1; j<n; j++){
    //      if(chars[j] == chars[j-1]) freq++;
    //      else if(chars[j] != chars[j-1] && freq > 1){
    //        str = str.concat(chars[j-1], freq);
    //         freq = 1;
    //      }
    //      else {
    //         str = str.concat(chars[j-1]);
    //      }
    // }

    // if(freq > 1){
    //       str = str.concat(chars[n-1], freq);
    // }else {
    //       str = str.concat(chars[n-1]);
    // }

    // for(let i=0; i<str.length; i++){
    //     chars[i] = `${str[i]}`;
    // }

    // return str.length;
};