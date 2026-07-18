class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:

        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                curr = matrix[i][j]
                if curr == target:
                    return True
        
        return False
        