from collections import defaultdict
from typing import List

class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = defaultdict(set)
        columns = defaultdict(set)
        grids = defaultdict(set)

        for i in range(0, 9):
            row = board[i]
            for j in range(0, 9):
                num = row[j]
                grid_id = (i // 3, j // 3)

                if num == ".":
                    continue

                if num in rows[i] or num in columns[j] or num in grids[grid_id]:
                    return False
                else:
                    rows[i].add(num)
                    columns[j].add(num)
                    grids[grid_id].add(num)
                    
        return True