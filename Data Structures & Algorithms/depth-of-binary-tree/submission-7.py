# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        # base
        if not root:
            return 0

        # pre: 1, 2, 3, 4
        #print(root.val, ", ")

        # recursive
        lchild = self.maxDepth(root.left)
        rchild = self.maxDepth(root.right)

        # post: 2, 4, 3, 1
        #print(root.val, ", ")
        currentMaxDepth = max(lchild, rchild) + 1

        return currentMaxDepth