class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)

        maxL = [0] * n
        maxR = [0] * n

        maxL[0] = height[0]
        maxR[-1] = height[-1]

        for i in range(1, n):
            maxL[i] = max(maxL[i - 1], height[i])

            j = n - 1 - i
            maxR[j] = max(maxR[j + 1], height[j])

        water = 0

        for i in range(n):
            water += min(maxL[i], maxR[i]) - height[i]

        return water

        # n = len(height)
        # left, right = 0, n - 1
        # ans = 0
        # maxL = height[left]
        # maxR = height[right]

        # while left <= right:
        #     maxL = max(maxL, height[left])
        #     maxR = max(maxR, height[right])
        #     if height[left] <= height[right]:
        #         ans += min(maxL, maxR) - height[left]
        #         left += 1
        #     else:
        #         ans += min(maxL, maxR) - height[right]
        #         right -= 1
        # return ans
