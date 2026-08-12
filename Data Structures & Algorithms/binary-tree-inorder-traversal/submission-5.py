# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        if not root: return []
        # Morris traversal
        curr = root
        order = []
        while curr:
            if not curr.left:
                order.append(curr.val)
                curr = curr.right
            else:
                pre = curr.left
                # Important pre.right != curr otherwise infinite loop
                while pre.right and pre.right != curr:
                    pre = pre.right
                if not pre.right:
                    pre.right = curr
                    curr = curr.left
                else:
                    pre.right = None
                    order.append(curr.val)
                    curr = curr.right
        return order