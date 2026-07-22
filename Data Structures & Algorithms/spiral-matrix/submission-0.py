class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        res = []

        n = len(matrix)
        m = len(matrix[0])

        top = 0
        bottom = n - 1
        left = 0
        right = m - 1
        direction = 0 # 0 -> right, 1 -> down, 2 -> left, 3 -> up

        while top <= bottom and left <= right:
            if direction == 0:
                for i in range(left, right + 1):
                    res.append(matrix[top][i])
                top += 1
            elif direction == 1:
                for j in range(top, bottom + 1):
                    res.append(matrix[j][right])
                right -= 1
            elif direction == 2:
                for i in range(right, left - 1, -1):
                    res.append(matrix[bottom][i])
                bottom -= 1
            else:
                for j in range(bottom, top - 1, -1):
                    res.append(matrix[j][left])
                left += 1
            direction = (direction + 1) % 4
        
        return res
        





