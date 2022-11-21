#include "mylib.h"

struct ListNode *getMiddle(struct ListNode *head)
{
    struct ListNode *fast = head, *slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (fast)
        return slow->next;
    return slow;
}

int main()
{
    struct ListNode *L = createList(5);
    struct ListNode *middle = getMiddle(L);
    printf("%d", middle->val);
}