#include "mylib.h"

struct ListNode *removeNthFromEnd(struct ListNode *head, int n)
{
    struct ListNode *p = head;
    struct ListNode *backup[30];
    int index = 0;
    while (p)
    {
        backup[index] = p;
        p = p->next;
        index++;
    }
    if (index == 1)
    {
        free(head);
        return NULL;
    }
    if (n == 1)
    {
        backup[index - 2]->next = NULL;
        free(backup[index - 1]);
        return head;
    }
    struct ListNode *nextNode = backup[index - n]->next;
    backup[index - n]->val = nextNode->val;
    backup[index - n]->next = nextNode->next;
    free(nextNode);
    return head;
}

int main()
{
    struct ListNode *L = createList(6);
    L = removeNthFromEnd(L, 4);
    printList(L);
}