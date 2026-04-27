class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        #We basically want tha maximum possible positive difference
        if not prices: return 0
        lowest_price = float('inf')

        profit = 0
        for i in range(len(prices)):
            lowest_price = min(lowest_price, prices[i])
            if prices[i] - lowest_price > 0:
                profit = max(profit, prices[i] - lowest_price)
        
        return profit