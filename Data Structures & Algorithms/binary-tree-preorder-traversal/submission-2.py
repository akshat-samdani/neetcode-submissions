# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        # order = []

        # def preorder(node):
        #     if not node: 
        #         return []
        #     order.append(node.val)
        #     preorder(node.left)
        #     preorder(node.right)
        #     return order
        # return preorder(root)

        ## Using Stack
        if not root:
            return []
        stack = [root]
        order = []
        
        while stack:
            node = stack.pop()
            order.append(node.val)

            if node.right:
                stack.append(node.right)
            if node.left:
                stack.append(node.left)
        
        return order
            