class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Bruteforce O(n*n) & O(1)
        for (int i = 0, n = nums.size(); i < n; i++) {
            {
                for (int j = i + 1; j < n; j++) {
                    if (nums[i] + nums[j] == target) {
                        return {i, j};
                    }
                }
            }
        }

        // Optimal O(n) & O(n)
        unordered_map<int, int> umap;
        for (int i = 0, n = nums.size(); i < n; i++) {
            int diff = target - nums[i];
            if (umap.find(diff) != umap.end()) {
                return {umap[diff], i};
            }
            umap[nums[i]] = i;
        }
    }
};
