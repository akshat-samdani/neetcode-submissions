class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /* Sorting - O(nlogn) & O(1) */
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        sort(nums.begin(), nums.end());
        int currLen = 1;
        int longLen = 1;

        for (int i = 1; i < n; i++) {
            // If prev element duplicate, continue
            if (nums[i] == nums[i - 1]) {
                continue;
            }
            // If curr element is +1 of last, increase currLen
            else if (nums[i] == nums[i - 1] + 1) {
                currLen++;
            }
            else {
                currLen = 1;
            }
            longLen = max(longLen, currLen);

        }
        return longLen;

        
    }
};
