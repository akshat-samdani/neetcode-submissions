class Solution:
    def replaceElements(self, arr: List[int]) -> List[int]:
        greatest = -1
        ans = [-1] * len(arr)
        for i in range(len(arr) - 2, -1, -1):
            ans[i] = max(greatest, arr[i + 1])
            greatest = ans[i]
        return ans
        