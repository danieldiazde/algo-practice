class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        best = -float('inf')

        while left < right:
            base = right - left
            h = min(height[left], height[right])
            best = max(best, base * h)
            if height[right] > height[left]:
                left+= 1
            else:
                right -= 1

        return best