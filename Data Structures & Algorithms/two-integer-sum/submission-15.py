class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexed_nums = [(nums[i], i) for i in range(len(nums))]

        indexed_nums.sort(key = lambda x: x[0])

        left = 0
        right = len(nums) - 1

        while left < right:
            currSum = indexed_nums[left][0] + indexed_nums[right][0]
            if currSum == target:
                return [min(indexed_nums[left][1],indexed_nums[right][1]),
                max(indexed_nums[left][1],indexed_nums[right][1])]
            elif currSum < target:
                left += 1
            else:
                right -= 1
        
        return []

        
    


        


        
