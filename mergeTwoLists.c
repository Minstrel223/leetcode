#include "mylib.h"

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *p1, *p2, *current, *head;
    p1 = list1;
    p2 = list2;
    head = (struct ListNode *)malloc(sizeof(struct ListNode));
    head->next = NULL;
    current = head;
    while (p1 && p2)
    {
        if (p1->val < p2->val)
        {
            current->next = p1;
            p1 = p1->next;
        }
        else
        {
            current->next = p2;
            p2 = p2->next;
        }
        current = current->next;
    }
    if (p1)
    {
        current->next = p1;
    }
    if (p2)
    {
        current->next = p2;
    }
    return head->next;
}

int main()
{
    struct ListNode *L1 = createList(3);
    struct ListNode *L2 = createList(5);
    struct ListNode *L = mergeTwoLists(L1, L2);
    printList(L);
}