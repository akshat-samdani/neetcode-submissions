class Solution:
    def trap(self, height: List[int]) -> int:
        n = len(height)
        left, right = 0, n - 1
        ans = 0
        maxL = height[left]
        maxR = height[right]

        while left <= right:
            maxL = max(maxL, height[left])
            maxR = max(maxR, height[right])
            if height[left] <= height[right]:
                ans += min(maxL, maxR) - height[left]
                left += 1
            else:
                ans += min(maxL, maxR) - height[right]
                right -= 1
        return ans
