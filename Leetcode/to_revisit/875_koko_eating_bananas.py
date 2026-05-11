class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        left = 1
        right = max(piles)
        while left <= right:
            k = (left + right) // 2
            hours = sum((pile + k - 1) // k for pile in piles)

            if hours <= h:
                right = k + -1
            else:
                left = k + 1
        
        return left
        