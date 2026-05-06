class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:

        piles.sort()

        if len(piles) == h:
            return max(piles)
        
        def func(p : list[int], hours: int, eating_rate):
            index = 0
            while hours > 0:
                p[index] -= eating_rate
                if p[index] <= 0:
                    index += 1
                hours -= 1
            if p[-1] <= 0:
                return True
            else:
                return False
        
        eating_rate = 1
        while not func(piles, h, eating_rate):
            eating_rate+=1
        
        return eating_rate

s = Solution()

print(s.minEatingSpeed([3,6,7,11], 8))