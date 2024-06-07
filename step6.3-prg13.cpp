class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == nullptr || headB == nullptr) return nullptr;
        ListNode *a = headA;
        ListNode *b = headB;
        while(headA!=headB){
            headA = (headA == nullptr) ? b : headA->next;
            headB = (headB == nullptr) ? a : headB->next;
        }
        return headA;
    }
};
