/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=nullptr){
            temp = temp->next;
            cnt++;
        }
        cnt = cnt - (k%cnt);
        temp = head;
        while(cnt>1){
            temp = temp->next;
            cnt--;
        }
        ListNode* newHead = temp->next;
        temp->next = nullptr;
        temp = newHead;
        if(temp == nullptr) return head;
        while(temp->next!=nullptr) temp = temp->next;
        temp->next = head;
        return newHead;
    }
};
