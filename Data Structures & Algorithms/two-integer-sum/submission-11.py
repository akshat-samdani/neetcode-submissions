class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        indexed_nums = [(num, i) for i, num in enumerate(nums)]
        indexed_nums.sort(key = lambda x: x[0])
        
        i, j = 0, len(nums) - 1

        while i < j:
            currSum = indexed_nums[i][0] + indexed_nums[j][0]
            if currSum == target:
                return [min(indexed_nums[i][1], indexed_nums[j][1]),
                max(indexed_nums[i][1], indexed_nums[j][1])]
            elif currSum < target:
                i += 1
            else:
                j -= 1
        
        return [-1, -1]

        


        
