class Solution {
public:
    int maxArea(vector<int>& height) {
        /* Optimal: Using Two pointer - O(n) & O(1) */
        // Logic: Area: min(h1, h2) * width
        // And we want to maximize our min height

        int n = height.size();
        int left = 0, right = n - 1;
        int maxArea = 0;
        while (left < right) {
            int width = right - left;
            int currArea = min(height[left], height[right]) * width;
            maxArea = max(maxArea, currArea);

            if (height[left] <= height[right]) {
                left++;
            }
            else {
                right--;
            }
        }
        return maxArea;
    }
};
