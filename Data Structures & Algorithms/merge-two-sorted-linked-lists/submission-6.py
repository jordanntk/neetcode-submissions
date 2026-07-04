# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if not list1:
            return list2
        if not list2:
            return list1

        l1 = list1
        l2 = list2

        dummyNode = ListNode()
        tail = dummyNode

        while l1 or l2:
            if not l1:
                tail.next = l2
                return dummyNode.next
            if not l2:
                tail.next = l1
                return dummyNode.next

            if l1.val <= l2.val:
                tail.next = l1
                tail = tail.next
                l1 = l1.next
            elif l2.val < l1.val:
                tail.next = l2
                tail = tail.next
                l2 = l2.next
        
        return dummyNode.next