# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        
        def sameTree(root, subRoot) -> bool:

            if not root and not subRoot:
                print("line: 14")
                return True

            elif not root or not subRoot:
                print("line: 18")
                return False

            if root.val != subRoot.val:
                print("line: 22")
                return False

            checkLeft = sameTree(root.left, subRoot.left)
            checkRight = sameTree(root.right, subRoot.right)

            if not checkLeft or not checkRight:
                print("line: 29")
                return False

            return True

        if root is None:
            print("line: 35")
            return False

        if root.val == subRoot.val:
            if sameTree(root, subRoot):
                return True

        checkLeft = self.isSubtree(root.left, subRoot)
        checkRight = self.isSubtree(root.right, subRoot)

        if checkLeft or checkRight:
            print("line: 45")
            return True
        
        return False
    


            