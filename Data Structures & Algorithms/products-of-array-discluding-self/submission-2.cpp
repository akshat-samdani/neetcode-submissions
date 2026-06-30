class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // Two pass solution - O(n) & O(1)
        // Calculate prefix multiplication in answer array traversing left to right
        // then when traversing right to left calc post multiplication and build ans
        int pre = 1;
        int post = 1;
        int n = nums.size();    
        vector<int> ans(n, 1);

        for (int i = 0; i < n; i++) {
            ans[i] = pre;
            pre = pre * nums[i];
        }

        for (int j = n - 1; j >= 0; j--) {
            ans[j] = post * ans[j];
            post = post * nums[j];
        }

        return ans;
    }
};
