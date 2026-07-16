class Solution:
    def maxSubArray(self, nums: List[int]) -> int:

        # Brute force - O(n*n) & O(1)
        # Try all possible subarrays

        maxSum = float("-inf")
        n = len(nums)
        for i in range(n):
            currSum = 0
            for j in range(i, n):
                currSum += nums[j]
                maxSum = max(currSum, maxSum)
            
        return maxSum


        