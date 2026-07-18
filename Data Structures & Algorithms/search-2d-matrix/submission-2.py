class Solution:
    def binarySearch(self, row: List[int], target: int) -> bool:
        n = len(row)
        left = 0
        right = n - 1
        while (left <= right):
            mid = (left + right) // 2
            if (target == row[mid]):
                return True
            elif (target > row[mid]):
                left = mid + 1
            else:
                right = mid - 1
        return False

    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        # # Linear Search
        # for i in range(len(matrix)):
        #     for j in range(len(matrix[0])):
        #         curr = matrix[i][j]
        #         if curr == target:
        #             return True
        
        # return False

        # Binary Search - n log(m)
        rows = len(matrix)
        columns = len(matrix[0])

        for i, row in enumerate(matrix):
            lefti, leftj = i, 0
            righti, rightj = i, columns - 1
            valLeft = matrix[lefti][leftj]
            valRight = matrix[righti][rightj]
            if (target <= valRight and target >= valLeft):
                return self.binarySearch(row, target)
            else:
                continue
        return False
        
        