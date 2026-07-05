# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        # self.max_diameter = 0
        
        # if root is None:
        #     return 0

        # # job of the node is to return its max depth, 
        # # while doing the job of constantly checking if IT itself
        # # has the biggest diameter if it were the root node

        # l = self.diameterOfBinaryTree(root.left)
        # r = self.diameterOfBinaryTree(root.right)

        # current_diameter = l + r

        # self.max_diameter = max(self.max_diameter, current_diameter)

        # return max(l, r) + 1

        self.max_diameter = 0
        self.getDepthAndDiameterUpdate(root)
        return self.max_diameter



    def getDepthAndDiameterUpdate(self, root: Optional[TreeNode]) -> int:

        if root is None:
            return 0

        l = self.getDepthAndDiameterUpdate(root.left)
        r = self.getDepthAndDiameterUpdate(root.right)

        current_diameter = l + r
        self.max_diameter = max(self.max_diameter, current_diameter)

        return max(l, r) + 1
        