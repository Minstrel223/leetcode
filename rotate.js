/**
 * @param {number[]} nums
 * @param {number} k
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var rotate = function (nums, k) {
    k %= nums.length;
    let pre = nums[0];
    let count = 0;
    let start = 0;
    for (let i = 0; count < nums.length; i += k) {
        let temp = nums[(i + k) % nums.length]
        nums[(i + k) % nums.length] = pre;
        pre = temp;
        count++;
        if (((i + k) % nums.length) == start) {
            i++;
            start++;
            pre = nums[start];
        }
    }
};