#include <stdlib.h>
#include <stdio.h>
#define bool int
#define true 1
#define false 0
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct ListNode *createList(int length)
{
    struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
    struct ListNode *p = head;
    while (length > 1)
    {
        int val;
        scanf("%d", &val);
        p->val = val;
        struct ListNode *next = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->next = next;
        p = p->next;
        length--;
    }
    scanf("%d", &p->val);
    p->next = NULL;
    return head;
}

void printList(struct ListNode *head)
{
    while (head)
    {
        printf("%d ", head->val);
        head = head->next;
    }
}

struct TreeNode *createTree(int length)
{
    struct TreeNode *T = (struct TreeNode *)malloc(sizeof(struct TreeNode) * length);
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &((T + i)->val));
    }
    for (int i = 0; i < length; i++)
    {
        if (i + i + 1 < length)
            (T + i)->left = (T + i + i + 1)->val != -1 ? (T + i + i + 1) : NULL;
        else
            (T + i)->left = NULL;
        if (i + i + 2 < length)
            (T + i)->right = (T + i + i + 2)->val != -1 ? (T + i + i + 2) : NULL;
        else
            (T + i)->right = NULL;
    }
    return T;
}