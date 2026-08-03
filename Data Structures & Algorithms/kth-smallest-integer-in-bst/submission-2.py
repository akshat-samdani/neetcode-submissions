# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        # order = []
        # def inorder(node):
        #     if not node or len(order) == k:
        #         return 
        #     inorder(node.left)
        #     order.append(node.val)
        #     inorder(node.right)
        # inorder(root)
        
        # return order[k - 1]

        ans = None

        def inorder(node):
            # Recursive calls must modify the outer k and ans, not local copies.
            # Prevent Python from creating new local variables named k and ans.
            nonlocal ans, k
            if not node or ans:
                return 
            inorder(node.left)
            k -= 1
            if k == 0: 
                ans = node.val
                return
            inorder(node.right)

        inorder(root)
        return ans
        