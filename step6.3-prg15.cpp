class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* current = dummy;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr) {
            int currentSum = carry;
            if (l1 != nullptr) {
                currentSum += l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                currentSum += l2->val;
                l2 = l2->next;
            }

            if (currentSum > 9) {
                carry = 1;
                currentSum %= 10;
            } else {
                carry = 0;
            }

            current->next = new ListNode(currentSum);
            current = current->next;
        }

        if (carry == 1) {
            current->next = new ListNode(1);
        }

        return dummy->next;
    }
};
