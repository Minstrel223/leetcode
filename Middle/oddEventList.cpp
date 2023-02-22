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
    ListNode* oddEvenList(ListNode* head) {
        if(!(head&&head->next)){
            return head;
        }
        ListNode *p=head;
        ListNode *odd,*event,*event_1;
        odd=p;
        event=p->next;
        event_1=event;
        p=p->next->next;
        int index=3;
        while(p){
            if(index%2!=0){
                odd->next=p;
                odd=p;
            }
            else{
                event->next=p;
                event=p;
            }
            p=p->next;
            index+=1;
        }
        event->next=nullptr;
        odd->next=event_1;
        return head;
    }
};
int main(){
    ListNode *n1 = new ListNode(1);
    ListNode *n2 = new ListNode(2);
    ListNode *n3 = new ListNode(3);
    ListNode *n4 = new ListNode(4);
    ListNode *n5 = new ListNode(5);
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;

    Solution s;
    ListNode* p;
    p=s.oddEvenList(n1);
    while(p){
        std::cout<<p->val;
        p=p->next;
    }
}