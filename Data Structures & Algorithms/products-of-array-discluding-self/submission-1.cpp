class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // O(n) & O(n)
        // int n = nums.size();
        // vector<int> pre(n, 1);
        // vector<int> post(n, 1);

        // for (int i = 1; i < n; i++) {
        //     pre[i] = pre[i - 1] * nums[i - 1];
        // }
        // for (int i = n - 2; i >= 0; i--) {
        //     post[i] = post[i + 1] * nums[i + 1];
        // }

        // vector<int> ans(n);
        // for (int i = 0; i < n; i++) {
        //     ans[i] = pre[i] * post[i];
        // }
        // return ans;


        // O(n) & O(1)
        int pre = 1;
        int post = 1;
        int n = nums.size();

        vector<int> ans(n, 1);
        // Pre calculation
        for (int i = 0; i < n; i++) {
            ans[i] = pre;
            pre = pre * nums[i];
        }

        // Post calculation
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = post * ans[i];
            post = post * nums[i];
        }
        return ans;
    }
};
