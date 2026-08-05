class Solution:
    def trap(self, height: List[int]) -> int:

        
        n = len(height)
        maxL = [0] * n
        maxR = [0] * n
        maxL[0] = height[0]
        maxR[n - 1] = height[n - 1]
        for i in range(1, n):
            maxL[i] = max(maxL[i - 1], height[i])
        print(maxL)
        for i in range(n - 2, -1, -1):
            maxR[i] = max(maxR[i + 1], height[i])
        print(maxR)

        # water at i = min(maxL, maxR) - curr[i]
        water = 0
        for i in range(n):
            water += min(maxL[i], maxR[i]) - height[i]
            print(water)
        return water



        # n = len(height)
        # left = 0
        # right = n - 1
        # water = 0
        # maxL = height[0]
        # maxR = height[n - 1]
        # while left < right:
        #     if height[left] < height[right]:
        #         water += min(maxL, maxR) - height[left]
        #         maxL = max(height[left], maxL)
        #         left += 1
        #     else:
        #         water += min(maxL, maxR) - height[right]
        #         maxR = max(height[right], maxR)
        #         right -= 1
        
        # return water
            