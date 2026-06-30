class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // 1. Bruteforce - O(n*n) & O(1)
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         if (nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;


        // 2. Space Optimal(Sorting) - O(nlogn) & O(1)
        sort(nums.begin(), nums.end());
        for (int i = 1, n = nums.size(); i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                return true;
            }
        }
        return false;

    }
};