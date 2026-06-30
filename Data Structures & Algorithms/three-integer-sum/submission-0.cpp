class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> ans;

        for (int i = 0; i < n; i++) {
            // 1) Skip duplicate 'first' elements
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            // 2) Optimization: once nums[i] > 0, further sums can't be 0
            if (nums[i] > 0) break;
            int first = nums[i];
            int left = i + 1, right = n - 1;
            vector<int> sub;
            while (left < right) {
                int curr = first + nums[left] + nums[right];
                if (curr < 0) {
                    left++;
                }
                else if (curr > 0) {
                    right--;
                }
                else {
                    ans.push_back({first, nums[left], nums[right]});
                    // 3) Skip duplicate second elements
                    int lastLeft = nums[left];
                    while (left < right && nums[left] == lastLeft) left++;

                    // 4) Skip duplicate third elements
                    int lastRight = nums[right];
                    while (left < right && nums[right] == lastRight) right--;

                }
            }
        }


        return ans;
    }
};
