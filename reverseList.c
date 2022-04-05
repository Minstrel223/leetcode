#include "mylib.h"

struct ListNode *reverseList(struct ListNode *head)
{
    struct ListNode *current = head;
    struct ListNode *last = NULL;
    while (current)
    {
        struct ListNode *tmp = current->next;
        current->next = last;
        last = current;
        current = tmp;
    }
    return last;
}

int main()
{
    struct ListNode *L = createList(5);
    L = reverseList(L);
    printList(L);
}