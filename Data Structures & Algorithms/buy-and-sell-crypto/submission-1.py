class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        a = prices[0]

        for price in prices:
            a = price if a > price else a
            profit = max (profit, price - a )

        return profit