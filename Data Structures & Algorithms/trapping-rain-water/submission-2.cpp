class Solution {
public:
    int trap(vector<int>& height) {
        // Idea: water at a position = min(max height on left, max height on right) - current height
        // Two pointer - O(n) & O(1)
        
        int n = height.size();
        int left = 0;
        int right = n - 1;
        int maxLeft = 0, maxRight = 0;
        int ans = 0;
        while (left < right) {
            maxLeft = max(maxLeft, height[left]);
            maxRight = max(maxRight, height[right]);
            int curr = 0;

            // Decide which side to process:
            // the side with smaller height is the limiting side
            if (height[left] <= height[right]) {
                // water on left depends on maxLeft and maxRight (min of them)
                curr = min(maxLeft, maxRight) - height[left];
                left++; // move left pointer inward
            }
            else {
                // water on right depends on maxLeft and maxRight (min of them)
                curr = min(maxLeft, maxRight) - height[right];
                right--; // move right pointer inward
            }

            ans += curr;
        }
        return ans;
        
        
    }
};
