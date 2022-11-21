/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function (str) {
    let reg = /^\s*(\+{0,1}\d+|\-{0,1}\d+).*/;
    if (!reg.test(str)) return 0;
    let res = Number(str.replace(reg, '$1'));
    return Math.min(Math.max(res, -(2 ** 31)), 2 ** 31 - 1);
}