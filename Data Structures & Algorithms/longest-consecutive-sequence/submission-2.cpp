class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /* Sorting - O(nlogn) & O(1) */
        // int n = nums.size();
        // if (n == 0) {
        //     return 0;
        // }
        // sort(nums.begin(), nums.end());
        // int currLen = 1;
        // int longLen = 1;

        // for (int i = 1; i < n; i++) {
        //     // If prev element duplicate, continue
        //     if (nums[i] == nums[i - 1]) {
        //         continue;
        //     }
        //     // If curr element is +1 of last, increase currLen
        //     else if (nums[i] == nums[i - 1] + 1) {
        //         currLen++;
        //     }
        //     else {
        //         currLen = 1;
        //     }
        //     longLen = max(longLen, currLen);

        // }
        // return longLen;

        /* Using hashset - O(n) & O(n) */
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        unordered_set<int> hashset(nums.begin(), nums.end());

        // Logic: We need to check if we are at start of a seq
        // Skip if in middle of seq

        int longLen = 1;
        for (int i = 0; i < n; i++) {
            int currNum = nums[i];
            // Check if currNum is middle of seq skip
            if (hashset.count(nums[i] - 1) > 0) {
                continue;
            }
            else {
                int currLen = 1;
                while(hashset.count(++currNum) > 0) {
                    currLen++;
                }
                longLen = max(longLen, currLen);
            }
        }
        return longLen;

        
    }
};
