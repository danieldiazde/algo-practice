class Solution:
    def trap(self, height: List[int]) -> int:
        if not height: return 0

        # The amount of water that can be held depends on the minimum to the furthest left and furthest right
        L = [0] * len(height)
        R = [0] * len(height)
        L[0] = height[0]
        R[-1] = height[-1]

        for i in range(1, len(height)):
            L[i] = max(height[i], L[i - 1])
        
        for i in range(len(height) - 2, -1 , -1):
            R[i] = max(height[i], R[i + 1])

        water = 0
        for i in range(len(height)):
            water += min(L[i], R[i]) - height[i]
        
        return water
        




        
        