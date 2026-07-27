class Solution:
    def trap(self, height: List[int]) -> int:
        # n = len(height)
        # maxL = [0] * n
        # maxR = [0] * n
        # maxL[0] = height[0]
        # maxR[n - 1] = height[n - 1]
        # print(maxL)
        # for i in range(1, n):
        #     maxL[i] = max(maxL[i - 1], height[i])
        

        # for j in range(n - 2, -1, -1):
        #     maxR[j] = max(maxR[j + 1], height[j])

        # # water at i = min(maxL, maxR) - curr[i]
        # total = 0
        # for i in range(n):
        #     total += min(maxL[i], maxR[i]) - height[i]
        # return total

        maxL = maxR = 0
        # maxL and maxR are including current height
        n = len(height)
        left, right = 0, n - 1
        total = 0
        while left <= right:
            maxL = max(maxL, height[left])
            maxR = max(maxR, height[right])
            if maxL <= maxR:
                total += min(maxL, maxR) - height[left]
                left += 1
            else:
                total += min(maxL, maxR) - height[right]
                right -= 1
        return total

