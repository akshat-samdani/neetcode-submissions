class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        numSet = set(nums)
        ansRange = len(nums) + 1
        # Mathematically, ans will belong to [1, len(nums) + 1]
        for i in range(1, ansRange):
            if i not in numSet:
                return i

        return ansRange
        