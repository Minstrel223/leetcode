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

bool isPalindrome(struct ListNode *head)
{
    struct ListNode *secondHalf, *p;
    struct ListNode *fast = head, *slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (fast)
        secondHalf = slow->next;
    else
        secondHalf = slow;
    secondHalf = reverseList(secondHalf);
    p = secondHalf;
    bool result = true;
    while (secondHalf)
    {
        if (head->val != secondHalf->val)
        {
            result = false;
            break;
        }
        head = head->next;
        secondHalf = secondHalf->next;
    }
    reverseList(p);
    return result;
}

int main()
{
    struct ListNode *L = createList(5);
    bool r = isPalindrome(L);
    printf("%d\n", r);
    printList(L);
}