class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        # Using sort
        # prices.sort()
        # first, second = prices[0], prices[1]
        # ans = money - (first + second) 
        # return ans if ans >= 0 else money

        # Using greedy
        # Maintain min1 and min2

        min1 = min2 = money

        for p in prices:
            if p < min1:
                min2 = min1
                min1 = p
            elif p < min2:
                min2 = p
        ans = money - (min1 + min2) 
        return ans if ans >= 0 else money
        



        