class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        max_area = -float('inf')
        stack = []

        for i in range(len(heights)):
            start = i

            while stack and stack[-1][0] > heights[i]:
                height, index = stack.pop()

                max_area = max(max_area, height * (i - index))
                start = index
            stack.append((heights[i], start))
        
        n = len(heights)
        while stack:
            height, start = stack.pop()
            max_area = max(max_area, height * (n - start))

        
        return max_area
        