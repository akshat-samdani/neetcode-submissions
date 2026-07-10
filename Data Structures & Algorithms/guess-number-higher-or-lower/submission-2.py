# The guess API is already defined for you.
# @param num, your guess
# @return -1 if num is higher than the picked number
#          1 if num is lower than the picked number
#          otherwise return 0
# def guess(num: int) -> int:

class Solution:
    def guessNumber(self, n: int) -> int:
        # for pick in range(1, n + 1):
        #     guess_ans = guess(pick)
        #     if guess_ans == 0:
        #         return pick
        # return 0

        l, r = 1, n

        while True:
            mid = (l + r) // 2
            guess_ans = guess(mid)
            if (guess_ans == 0):
                return mid
            elif (guess_ans == -1):
                r = mid - 1
            else:
                l = mid + 1
        return mid

        
        