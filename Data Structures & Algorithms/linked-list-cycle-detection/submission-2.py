# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        fast = head
        slow = head

        if head is None:
            return False

        if head.next is None:
            return False

        

        while fast is not None:
            slow = slow.next

            fast = fast.next
            if fast is None:
                return False
            fast = fast.next
            if fast is None:
                return False

            if slow is fast:
                return True        
    

        return False