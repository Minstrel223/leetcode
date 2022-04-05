#include "mylib.h"

bool hasCycle(struct ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return false;
    struct ListNode *fast = head, *slow = head;
    while (fast != slow)
    {
        if (fast == NULL || fast->next == NULL)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }
    return true;
}

int main()
{
    printf("%d", hasCycle(createList(5)));
}