class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Bruteforce 
        for (int i = 0, n = nums.size(); i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (target == nums[i] + nums[j]) {
                    return {i , j};
                }
            }
        } 
        return {0, 0};
    }
};
