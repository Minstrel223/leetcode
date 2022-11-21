#include "mylib.h"

void traverse(struct TreeNode *root, long long int *last, bool *result)
{
    if (root->left != NULL && result != false)
        traverse(root->left, last, result);
    if (root->val <= *last)
        *result = false;
    else
        *last = root->val;
    if (root->right != NULL && result != false)
        traverse(root->right, last, result);
}

bool isValidBST(struct TreeNode *root)
{
    long long int last = -2147483649;
    bool result = true;
    traverse(root, &last, &result);
    return result;
}

int main()
{
    struct TreeNode *T = createTree(3);
    printf("%d", isValidBST(T));
}