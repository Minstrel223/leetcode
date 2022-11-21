/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function (s) {
    let j = s.length - 1;
    let l = s.length / 2;
    for (let i = 0; i < l; i++) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        j--;
    }
};