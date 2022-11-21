/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
    let counter = new Map();
    for (num of nums) {
        if (counter.has(num)) {
            return true
        }
        else {
            counter.set(num, 1)
        }
    }
    return false
};