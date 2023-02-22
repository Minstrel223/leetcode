#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode result;
        ListNode *p1, *p2, *p3;
        p1 = l1;
        p2 = l2;
        p3 = &result;
        int carryFlag = 0;
        while(p1||p2){
            ListNode *p = new ListNode();
            p3->next = p;
            p3 = p3->next;
            if(!p1)
                p1 = new ListNode(0);
            if(!p2)
                p2 = new ListNode(0);
            if(p1->val + p2->val + carryFlag < 10){
                p3->val = p1->val + p2->val + carryFlag;
                carryFlag = 0;
            }
            else{
                p3->val = p1->val + p2->val - 10 + carryFlag;
                carryFlag = 1;
            }
            p1 = p1->next;
            p2 = p2->next;
        }
        if(carryFlag==1){
            ListNode *p = new ListNode(1);
            p3->next = p;
        }
        return result.next;
    }
};