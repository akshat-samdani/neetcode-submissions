class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        q = deque()
        
        if root:
            q.append(root)
        
        while len(q) > 0:
            for i in range(len(q)):
                # In python, scope rules are different
                # After the loop finishes, node still exists and contains the last assigned value.
                node = q.popleft()
                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
            ans.append(node.val)
        return ans