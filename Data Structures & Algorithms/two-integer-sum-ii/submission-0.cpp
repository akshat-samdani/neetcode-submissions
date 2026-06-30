class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        /* Using two pointers - O(n) & O(1) */
        int left = 0, right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum > target) {
                right--;
            }
            else if (sum < target) {
                left++;
            }
            else {
                return {left + 1, right + 1};
            }
        }
        // As exactly 1 solution exists, given in constraints.
        return {0, 0};
    }
};
