/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
    var map = new Map();
    var sa = Array.from(s);
    var ta = Array.from(t);
    for (let a of sa) {
        if (map.has(a)) {
            map.set(a, map.get(a) + 1);
        }
        else {
            map.set(a, 1);
        }
    }
    for (let a of ta) {
        if (!map.has(a)) return false;
        else {
            map.set(a, map.get(a) - 1);
        }
    }
    for (let v of map.values()) {
        if (v != 0) return false;
    }
    return true;
};