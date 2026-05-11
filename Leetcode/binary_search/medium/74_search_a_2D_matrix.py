class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:


        m = len(matrix)
        n = len(matrix[0])

        for row in matrix:
            if row[-1] < target:
                continue
            else:
                if len(row) == 1:
                    if row[0] == target: return True
                    else:
                        return False
                left = 0
                right = n - 1
                while left <= right:
                    mid = (left + right) // 2
                    if row[mid] == target:
                        return True
                    if row[mid] < target:
                        left = mid + 1
                    else:
                        right = mid - 1

        return False
        