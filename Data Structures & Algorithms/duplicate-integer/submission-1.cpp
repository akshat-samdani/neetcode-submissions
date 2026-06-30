class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Approach 1: Using set - O(n) & O(n)
        // set<int> s(nums.begin(), nums.end());
        // return s.size() != nums.size();

        // Approach 2: Sorting - O(n log n) & O(1)
        sort(nums.begin(), nums.end());

        for (int i = 1, n = nums.size(); i < n; i++) {
            if (nums[i] == nums[i - 1])
                return true;
        }
        return false;



    }
};