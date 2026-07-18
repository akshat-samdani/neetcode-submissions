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

    def findRow(self, rows: List[List[int]], target) -> int:
        nRows = len(rows)
        nCols = len(rows[0])
        firstRow = 0
        lastRow = nRows - 1
        while firstRow <= lastRow:
            midRow = (firstRow + lastRow) // 2
            if (target >= rows[midRow][0] and target <= rows[midRow][nCols - 1]):
                return midRow
            elif(target >= rows[midRow][0]):
                firstRow = midRow + 1
            else:
                lastRow = midRow - 1
        return -1


    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        # # Linear Search
        # for i in range(len(matrix)):
        #     for j in range(len(matrix[0])):
        #         curr = matrix[i][j]
        #         if curr == target:
        #             return True
        
        # return False

        # Binary Search on each row - O(m + logn)
        # rows = len(matrix)
        # columns = len(matrix[0])

        # for i, row in enumerate(matrix):
        #     lefti, leftj = i, 0
        #     righti, rightj = i, columns - 1
        #     valLeft = matrix[lefti][leftj]
        #     valRight = matrix[righti][rightj]
        #     if (target <= valRight and target >= valLeft):
        #         return self.binarySearch(row, target)
        #     else:
        #         continue
        # return False

        # Binary Search - O(log(nm)) & O(1)
        # rows = len(matrix)
        # columns = len(matrix[0])
        # rowIdx = self.findRow(matrix, target)
        # if rowIdx == -1: return False

        # return self.binarySearch(matrix[rowIdx], target)

        # Binary Search(One pass): O(log(nm)) & O(1)
        rows = len(matrix)
        cols = len(matrix[0])

        left, right = 0, rows * cols - 1

        while left <= right:
            mid = (left + right) // 2
            row = mid // cols
            col = mid % cols
            if target == matrix[row][col]:
                return True
            elif target > matrix[row][col]:
                left = mid + 1
            else:
                right = mid - 1
        return False

            

        
        