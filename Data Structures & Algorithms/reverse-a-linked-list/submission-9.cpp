/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptrptr) {}
 *     ListNode(int x) : val(x), next(nullptrptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        if (head == nullptr || head->next == nullptr) { 
            return head;
        }

        ListNode *prev = nullptr;
        ListNode *cur = head;

        while (cur != nullptr) {
            ListNode *cnext = cur->next;
            cur->next = prev;
            prev = cur;
            cur = cnext;
        }

        return prev;
    }
};


