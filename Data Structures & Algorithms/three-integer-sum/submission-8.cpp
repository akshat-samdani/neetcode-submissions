class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Two pointers - O(n*n) & O(1)
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            // Avoid calculating triplet with same nums[left]
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                int currSum = nums[i] + nums[left] + nums[right];
                
                // and if we two of the numbers, then we don't need to handle the third
                if (currSum == 0) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    // Avoid calculating triplet with same nums[left]
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                }
                else if (currSum < 0) {
                    left++;
                }
                else {
                    right --;
                }
            }
        }

        return ans;
    }
};
