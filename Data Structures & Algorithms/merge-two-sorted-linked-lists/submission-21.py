# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        dummy = ListNode() # this pointer stays at head of dummy
        dP = dummy # dummy pointer that will traverse dummy

        while list1 and list2:
            if list1.val <= list2.val:
                dP.next = list1    # connect to list1
                list1 = list1.next # move list1's pointer
            else:
                dP.next = list2
                list2 = list2.next
            dP = dP.next
        
        dP.next = list1 or list2

        return dummy.next

