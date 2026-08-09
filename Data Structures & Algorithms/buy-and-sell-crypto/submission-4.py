class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        # intuition: if you had the best selling price on a
        # certain day, anything to the left of it that is 
        # lower than it, is a profitable if bought,
        # but the best would be the lowest.
        # eg. [X, X, X, X, 10, X, X, X]
        # say 10 is the highest number
        # that means anything to the left of 10, can be considered
        # for sale, but the best would be the lowest X of this group

        maxP = 0
        lowestDay = prices[0]

        for day in prices:
            maxP = max(maxP, day - lowestDay)
            lowestDay = min(day, lowestDay)
        return maxP