class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        numSet = set(nums)
        best = 0

        for num in numSet:
            if num + 1 not in numSet:
                currLen = 1
                # Check is this the end of seq, if yes then count seq len.
                while (num - currLen) in numSet:
                    currLen += 1
                best = max(currLen, best)
        
        return best
            


        