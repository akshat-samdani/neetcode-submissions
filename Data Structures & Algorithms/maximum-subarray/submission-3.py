class Solution:
    def maxSubArray(self, nums: List[int]) -> int:

        # Brute force - O(n*n) & O(1)
        # Try all possible subarrays

        # maxSum = float("-inf")
        # n = len(nums)
        # for i in range(n):
        #     currSum = 0
        #     for j in range(i, n):
        #         currSum += nums[j]
        #         maxSum = max(currSum, maxSum)
            
        # return maxSum

        # Optimal - O(n) & O(1) - Greedy/ Kadan's alog
        currSum = 0
        maxSum = -1001
        for num in nums:
            if currSum < 0: currSum = 0
            currSum += num
            maxSum = max(maxSum, currSum)
        return maxSum



        