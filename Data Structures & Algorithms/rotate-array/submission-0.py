class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """

        while k:
            last = nums.pop()
            nums.insert(0, last)
            k -= 1

        return nums


        