class Solution {
public:
    int maxArea(vector<int>& heights) {
        // maxArea is bounded by which height is lower
        // area = min(Hl, Hr) * width

        // Two pointer - O(n) & O(1)
        int n = heights.size();
        int left = 0;
        int right = n - 1;
        int ans = 0;

        while (left < right) {
            int width = right - left;
            int curr = min(heights[left], heights[right]) * width;
            if (heights[left] <= heights[right]) {
                left++;
            }
            else {
                right--;
            }
            ans = max(ans, curr);
        }
        return ans;
    }
};
