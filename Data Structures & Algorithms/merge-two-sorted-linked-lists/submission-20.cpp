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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }

        ListNode dummy;
        ListNode *tail = &dummy;

        ListNode *l1 = list1;
        ListNode *l2 = list2;

        while (l1 || l2) {
            if (!l1) {
                tail->next = l2;
                return dummy.next;
            }
            if (!l2) {
                tail->next = l1;
                return dummy.next;
            }

            if ((l1->val) <= (l2->val)) {
                tail->next = l1;
                tail = tail->next;
                l1 = l1->next;
            }
            else if ((l2->val) < (l1->val)) {
                tail->next = l2;
                tail = tail->next;
                l2 = l2->next;
            }

        }
        return dummy.next;
    }
};
