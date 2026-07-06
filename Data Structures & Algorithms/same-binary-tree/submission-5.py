# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        
        def traverse(p, q):
            if p is None and q is None:
                return True
            elif p is None or q is None:
                return False

            check_left = traverse(p.left, q.left)
            if not check_left:
                return False
            
            check_right = traverse(p.right, q.right)
            if not check_right:
                return False

            if p.val != q.val:
                return False

            return True
        return traverse(p, q)