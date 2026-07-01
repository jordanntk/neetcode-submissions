class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        lowestPrice = 100
        maxProfit = 0

        for price in prices:
            if price < lowestPrice:
                lowestPrice = price
                continue
            elif price - lowestPrice > maxProfit:
                maxProfit = price - lowestPrice
        
        return maxProfit