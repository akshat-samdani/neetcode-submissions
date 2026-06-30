class Solution {
public:
    int trap(vector<int>& height) {
        // Formula: min(HmaxL, HmaxR) - H * width(1)
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
            if (height[left] <= height[right]) {
                curr = min(maxLeft, maxRight) - height[left];
                left++;
            }
            else {
                curr = min(maxLeft, maxRight) - height[right];
                right--;
            }
            ans += curr;
        }
        return ans;
        
        
    }
};
