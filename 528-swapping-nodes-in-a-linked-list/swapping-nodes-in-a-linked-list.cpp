class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *first = head;
        for (int i = 1; i < k; i++) {
            first = first->next;
        }
        ListNode *kthFromStart = first;
        ListNode *kthFromEnd = head;
        while (first->next) {
            first = first->next;
            kthFromEnd = kthFromEnd->next;
        }
        swap(kthFromStart->val, kthFromEnd->val);
        return head;
    }
};