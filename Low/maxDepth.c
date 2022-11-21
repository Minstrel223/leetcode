#include "mylib.h"

int maxDepth(struct TreeNode *root)
{
    if (root == NULL)
        return 0;
    int a = maxDepth(root->left);
    int b = maxDepth(root->right);
    return a > b ? a + 1 : b + 1;
}