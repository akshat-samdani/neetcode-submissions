# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        # Moris traversal
        # O(1) extra space
        # idea is to create a temporary link from the rightmost node of the left subtree back to the current node
        # This allows us to return to the current node after traversing the left subtree without using a stack.
        current = root
        order = []

        while current:
            if not current.left:
                order.append(current.val)
                current = current.right
            else:
                predecessor = current.left
                while predecessor.right and predecessor.right != current:
                    predecessor = predecessor.right
                if not predecessor.right:
                    predecessor.right = current
                    current = current.left
                else:
                    predecessor.right = None
                    order.append(current.val)
                    current = current.right
        return order

        