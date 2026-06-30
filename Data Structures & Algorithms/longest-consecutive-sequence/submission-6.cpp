class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Identify the beginning of the sequence
        // If in middle skip

        // unordered_set<int> uset(nums.begin(), nums.end());
        // int n = nums.size();
        // int ans = 0;

        // for (int num: uset) {
        //     if (uset.count(num - 1)) {
        //         continue;
        //     }
        //     int curr = 1;
        //     int next = num + 1;
        //     while (uset.find(next) != uset.end()) {
        //         curr++;
        //         next++;
                
        //     }
        //     ans = max(ans, curr);
        // }
        // return ans;

        // or
        unordered_set<int> uset(nums.begin(), nums.end());
        int ans = 0;

        for (int num : uset) {
            // Only consider num if it is the END of a consecutive sequence
            // i.e., num + 1 does NOT exist
            if (uset.find(num + 1) == uset.end()) {
                int curr = 1;
                int prev = num - 1;

                // Walk backwards: num, num-1, num-2, ...
                while (uset.find(prev) != uset.end()) {
                    curr++;
                    prev--;
                }

                ans = max(ans, curr);
            }
        }
        return ans;
        
    }
};
