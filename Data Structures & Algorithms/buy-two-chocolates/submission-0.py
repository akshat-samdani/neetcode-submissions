class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        # Using sort
        prices.sort()
        first, second = prices[0], prices[1]
        ans = money - (first + second) 
        return ans if ans >= 0 else money

        