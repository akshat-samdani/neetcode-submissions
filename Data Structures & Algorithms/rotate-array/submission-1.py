class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        # O(n*k) & O(1)
        # while k:
        #     last = nums.pop()
        #     nums.insert(0, last)
        #     k -= 1

        # return nums

        # O(n) & O(1)

        def reverse(l, r):
            while l < r:
                nums[l], nums[r] = nums[r], nums[l]
                l, r = l + 1, r - 1
        
        n = len(nums)
        k %= n

        reverse(0, n - 1)
        reverse(0, k - 1)
        reverse(k, n - 1)

        