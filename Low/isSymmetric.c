#include "mylib.h"

bool judge(struct TreeNode *n1, struct TreeNode *n2)
{
    if (n1 == NULL && n2 == NULL)
        return true;
    if (n1 == NULL || n2 == NULL || n1->val != n2->val)
        return false;
    return judge(n1->left, n2->right) && judge(n1->right, n2->left);
}

bool isSymmetric(struct TreeNode *root)
{
    return judge(root->left, root->right);
}