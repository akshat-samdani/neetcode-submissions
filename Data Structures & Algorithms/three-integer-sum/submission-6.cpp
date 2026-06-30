class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        /* Using Two pointers and Sorting - O(nlogn) & O(1) */
        sort(nums.begin(), nums.end());
        // [-2, -2, -2, 0, 0, 0, 2 , 2 , 2] -> [[-2, 0, 2], [0, 0, 0]]
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            // Avoiding duplicates for first num
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            // Optimization: Avoid if curr num > 0 as we can't sum to 0
            if (nums[i] > 0) {
                break;
            }

            int left = i + 1, right = n - 1;
            while (left < right) {
                int threeSum = nums[i] + nums[left] + nums[right];
                if (threeSum > 0) {
                    right--;
                }
                else if (threeSum < 0) {
                    left++;
                }
                else {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    // We need to avoid duplicate for second num also
                    // No need to do for right as we have made sure 
                    // with below loop left is new again
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    
                }
            }
        }
        return ans;
        
    }
};