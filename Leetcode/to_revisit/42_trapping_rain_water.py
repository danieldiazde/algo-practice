class Solution:
    def trap(self, height: list[int]) -> int:
        n = len(height)
        left = [0] * n
        right = [0] * n

        max_left = 0
        max_right = 0
        for i in range(1, n):
            max_left = max(height[i - 1], max_left)
            left[i] = max_left

        for i in range(n - 2, -1, -1):
            max_right = max(height[i + 1], max_right)
            right[i] = max_right
        
        ans = 0
        for i in range(n):
            ans += max(0, min(right[i], left[i]) - height[i])

        return ans



s = Solution()
print(s.trap([0,1,0,2,1,0,1,3,2,1,2,1]))
        