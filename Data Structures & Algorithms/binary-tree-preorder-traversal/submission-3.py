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

        # ## Using Stack
        # if not root:
        #     return []
        # stack = [root]
        # order = []
        
        # while stack:
        #     node = stack.pop()
        #     order.append(node.val)

        #     if node.right:
        #         stack.append(node.right)
        #     if node.left:
        #         stack.append(node.left)
        
        # return order



        order = []

        curr = root

        while curr:
            # case 1: no left subtree
            if not curr.left:
                order.append(curr.val)
                curr = curr.right
            # case 2: left subtree exists
            else:
                predecessor = curr.left
                while predecessor.right and predecessor.right != curr:
                    predecessor = predecessor.right
                # if visiting first time, add link
                if not predecessor.right:
                    predecessor.right = curr
                    order.append(curr.val)
                    curr = curr.left
                # if already visited
                else:
                    predecessor.right = None
                    curr = curr.right
        return order

