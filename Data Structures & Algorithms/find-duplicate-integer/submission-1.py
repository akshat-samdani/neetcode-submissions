class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        # Using sorting 
        # nums.sort()
        # for i in range(1, len(nums)):
        #     if nums[i] == nums[i - 1]:
        #         return nums[i]
        # return -1

        # Using hashmap
        hashmap = defaultdict(int)
        
        for num in nums:
            if num in hashmap:
                return num
            hashmap[num] = 1
        return -1
        