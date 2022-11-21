/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return sortedArrayToBST(0, nums.size() - 1, nums);
    }
    TreeNode *sortedArrayToBST(int l, int r, vector<int> &nums)
    {
        if (l > r)
            return nullptr;
        int mid = (l + r) / 2;
        TreeNode *n = new TreeNode(nums[mid]);
        n->left = sortedArrayToBST(l, mid - 1, nums);
        n->right = sortedArrayToBST(mid + 1, r, nums);
        return n;
    }
};