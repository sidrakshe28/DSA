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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head) return nullptr;

        // Step 1: Add dummy node to front of LL
        ListNode* dummy = new ListNode(0,head);
        head = dummy;

        // Step 2: Find l_prev and l
        ListNode* curr = head->next; // original head
        ListNode* prev = dummy;

        for(int i = 0; i < left - 1; i++) {
            prev = curr;
            curr = curr->next;
        }

        // Step 3: Revere from L to r
        ListNode* left_prev = prev;
        prev = nullptr;

        for(int i = 0; i < right - left + 1; i++) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Step 4: Rearrange pointers
        left_prev->next->next = curr;
        left_prev->next = prev;

        return dummy->next;
    }
};