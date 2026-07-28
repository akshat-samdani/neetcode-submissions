class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        
        # n1 = len(nums1)
        # n2 = len(nums2)
        # ans = []
        # for i in range(n1):
        #     for j in range(n2):
        #         if (nums1[i] == nums2[j]):
        #             if j == n2 - 1:
        #                 ans.append(-1)
        #                 break
        #             for k in range(j + 1, n2):
        #                 if nums2[k] > nums1[i]:
        #                     ans.append(nums2[k])
        #                     break
        #                 elif k == n2 - 1:
        #                     ans.append(-1)
        # return ans


        n1 = len(nums1)
        n2 = len(nums2)
        ans = []
        for i in range(n1):
            right = n2 - 1
            currMax = -1
            for j in range(right, -1, -1):
                if nums1[i] == nums2[j]:
                    ans.append(currMax)
                    break
                elif nums2[j] > nums1[i]:
                    currMax = nums2[j]
        return ans
