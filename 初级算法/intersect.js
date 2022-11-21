/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersect = function (nums1, nums2) {
    let map1 = new Map();
    let map2 = new Map();
    for (let num of nums1) {
        if (!map1.has(num)) map1.set(num, 1);
        else map1.set(num, map1.get(num) + 1);
    }
    for (let num of nums2) {
        if (map1.has(num)) {
            if (!map2.has(num)) map2.set(num, 1);
            else map2.set(num, map2.get(num) + 1);
        }
    }
    let res = new Array();
    for (let key of map2.keys()) {
        for (let i = 0; i < min(map1.get(key), map2.get(key)); i++) {
            res.push(key);
        }
    }
    return res;
    function min(a, b) {
        if (a < b) return a;
        else return b;
    }
};