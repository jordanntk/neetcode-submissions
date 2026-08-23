class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        currentLowest = prices[0]
        currentMax = 0

        for day in prices:
            if day < currentLowest:
                currentLowest = day
            currentMax = max(currentMax, day - currentLowest)
        
        return currentMax