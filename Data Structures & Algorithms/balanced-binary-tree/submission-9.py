# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def check(root: Optional[TreeNode]):
            if root is None:
                return [True, 0]

            left_balanced = check(root.left) # self. is only for accessing the outer most level i.e. class level
            if not left_balanced[0]:
                return [False, 0]

            right_balanced = check(root.right)
            if not right_balanced[0]:
                return [False, 0]

            checkBalanced = abs(left_balanced[1] - right_balanced[1]) <= 1
            height = max(left_balanced[1], right_balanced[1]) + 1

            return [checkBalanced, height]

        return check(root)[0]