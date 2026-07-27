class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        freq = Counter(nums)
        best = 0

        for key in freq:
            prev = key - 1
            currLen = 1
            # Check is this the end of seq, if yes then count seq len.
            while prev in freq and key + 1 not in freq:
                currLen += 1
                prev -= 1
            best = max(currLen, best)
        
        return best
            


        