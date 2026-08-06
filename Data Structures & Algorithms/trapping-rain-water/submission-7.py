class Solution:
    def trap(self, height: List[int]) -> int:
        
        # n = len(height)
        # maxL = [0] * n
        # maxR = [0] * n
        # maxL[0] = height[0]
        # maxR[n - 1] = height[n - 1]
        # for i in range(1, n):
        #     maxL[i] = max(maxL[i - 1], height[i])
        # print(maxL)
        # for i in range(n - 2, -1, -1):
        #     maxR[i] = max(maxR[i + 1], height[i])
        # print(maxR)

        # # water at i = min(maxL, maxR) - curr[i]
        # water = 0
        # for i in range(n):
        #     water += min(maxL[i], maxR[i]) - height[i]
        #     print(water)
        # return water

        n = len(height)
        lMax, rMax = height[0], height[n - 1]
        left, right = 0, n - 1
        ans = 0
        while left <= right:
            lMax = max(height[left], lMax)
            rMax = max(height[right], rMax)
            # we can calc water at limiting height and move on
            if height[left] <= height[right]:
                ans += min(lMax, rMax) - height[left]
                left += 1
            else:
                ans += min(lMax, rMax) - height[right]
                right -= 1
        return ans
    

        
        



        
            